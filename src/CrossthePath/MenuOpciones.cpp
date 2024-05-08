#define _CRTDBG_MAP_ALLOC
#include "MenuOpciones.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include <RenderManager.h>
#include "GameManager.h"
#include <SceneManager.h>
#include <AudioManager.h>
#include "Entity.h"
#include "CText.h"
#include "CBar.h"
#include "CIMage.h"
#include "CButton.h"
#include "SoundsController.h"

const std::string ctp::MenuOpciones::_id = "OPCIONES";

ctp::MenuOpciones::MenuOpciones() {

	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "Opciones", &ctp::MenuOpciones::ClickButton, "MenuOptionsClick", this);
	scriptM->SetGlobal(this, "Opciones");
	scriptM = nullptr;

}

void ctp::MenuOpciones::Start()
{
	ChangeResolutionText();
	_fullScreenON = eden::SceneManager::getInstance()->FindEntity("fullScreenON");
	_fullScreenOFF = eden::SceneManager::getInstance()->FindEntity("fullScreenOFF");
}

void ctp::MenuOpciones::Update(float t)
{
	if (iteration==1) {

		ChangeVolumenBar();
		if (!eden_render::RenderManager::getInstance()->IsFullScreen()) {

			_fullScreenON->GetComponent<eden_ec::CButton>()->Hide();
			_fullScreenOFF->GetComponent<eden_ec::CButton>()->Show();
		}
		else {
			_fullScreenON->GetComponent<eden_ec::CButton>()->Show();
			_fullScreenOFF->GetComponent<eden_ec::CButton>()->Hide();
		}
	}
	iteration++;
	ChangeResolutionText();
}

void ctp::MenuOpciones::GoBack()
{
	ctp::GameManager::Instance()->GoBack();
}

void ctp::MenuOpciones::FullScreen()
{
	_fullScreenON = eden::SceneManager::getInstance()->FindEntity("fullScreenON");
	_fullScreenOFF = eden::SceneManager::getInstance()->FindEntity("fullScreenOFF");

	if (eden_render::RenderManager::getInstance()->IsFullScreen()) {

		_fullScreenON->GetComponent<eden_ec::CButton>()->Hide();
		_fullScreenOFF->GetComponent<eden_ec::CButton>()->Show();
	}
	else {
		_fullScreenON->GetComponent<eden_ec::CButton>()->Show();
		_fullScreenOFF->GetComponent<eden_ec::CButton>()->Hide();
	}
	eden_render::RenderManager::getInstance()->FullScreen();
	_fullScreenON->GetComponent<eden_ec::CButton>()->Resize();
	_fullScreenOFF->GetComponent<eden_ec::CButton>()->Resize();
	ctp::GameManager::Instance()->GetSound()->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
}

void ctp::MenuOpciones::NextResolution()
{
	eden_render::RenderManager::getInstance()->NextResolutuion();
	ChangeResolution();
}

void ctp::MenuOpciones::PreviousResolution()
{
	eden_render::RenderManager::getInstance()->PreviousResolution();
	ChangeResolution();
}

void ctp::MenuOpciones::ChangeResolution()
{
	ChangeResolutionText();
	eden_render::RenderManager::getInstance()->ChangeResolution();
	ctp::GameManager::Instance()->GetSound()->GetComponent<SoundsController>()->PlaySound(SoundsController::ARROW_BUTTON);
}


void ctp::MenuOpciones::ChangeResolutionText()
{
	std::pair aux = eden_render::RenderManager::getInstance()->GetResolution();
	std::string text = std::to_string(aux.first) + "x" + std::to_string(aux.second);
	_res = eden::SceneManager::getInstance()->FindEntity("resolutionsText");
	if (_res != nullptr) {
		_res->GetComponent<eden_ec::CText>()->SetNewText(text);
	}
}

void ctp::MenuOpciones::IncreaseVolumen()
{
	ChangeVolumen(0.05);
}

void ctp::MenuOpciones::DecreaseVolumen()
{
	ChangeVolumen(-0.05);
}

void ctp::MenuOpciones::ChangeVolumen(float num)
{
	float aux = eden_audio::AudioManager::GetInstance()->GetGlobalVolume() + num;
	eden_audio::AudioManager::GetInstance()->SetGlobalVolume(aux);
	ChangeVolumenBar();
	ctp::GameManager::Instance()->GetSound()->GetComponent<SoundsController>()->PlaySound(SoundsController::ARROW_BUTTON);
}

void ctp::MenuOpciones::ChangeVolumenBar()
{
	_vol = eden::SceneManager::getInstance()->FindEntity("volumenBar");
	if (_vol != nullptr) {
		float v = eden_audio::AudioManager::GetInstance()->GetGlobalVolume();
		_vol->GetComponent<eden_ec::CBar>()->SetBarPercentage(v * 100);
		int aux = _vol->GetComponent<eden_ec::CBar>()->GetBarPercentage();
		if (aux <= 33) {
			_vol->GetComponent<eden_ec::CBar>()->SetMaterial("Volume_BarLow.png");
		}
		else if (aux <= 66) {
			_vol->GetComponent<eden_ec::CBar>()->SetMaterial("Volume_Bar.png");
		}
		else {
			_vol->GetComponent<eden_ec::CBar>()->SetMaterial("Volume_BarFull.png");
		}
		Muted(v);
	}
}
void ctp::MenuOpciones::Muted(float v)
{
	if (v <= 0) {
		eden::SceneManager::getInstance()->FindEntity("muted")->GetComponent<eden_ec::CImage>()->Show();
	}
	else {
		eden::SceneManager::getInstance()->FindEntity("muted")->GetComponent<eden_ec::CImage>()->Hide();
	}
	eden::SceneManager::getInstance()->FindEntity("muted")->GetComponent<eden_ec::CImage>()->Resize();
	eden_render::RenderManager::getInstance()->ResizedWindow();
}

void ctp::MenuOpciones::ClickButton()
{
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");
	
	if (otherEnt->GetEntityID() == "buttonResume")	{
		GoBack();
	}
	else if (otherEnt->GetEntityID() == "fullScreenON" || otherEnt->GetEntityID() == "fullScreenOFF"){
		FullScreen();
	}
	else if (otherEnt->GetEntityID() == "resolutions1") {
		PreviousResolution();
	}
	else if (otherEnt->GetEntityID() == "resolutions2") {
		NextResolution();
	}
	else if (otherEnt->GetEntityID() == "volumen1") {
		DecreaseVolumen();
	}
	else if (otherEnt->GetEntityID() == "volumen2") {
		IncreaseVolumen();
	}
}
