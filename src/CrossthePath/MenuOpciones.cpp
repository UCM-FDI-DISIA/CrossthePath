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

const std::string eden_ec::MenuOpciones::_id = "OPCIONES";

eden_ec::MenuOpciones::MenuOpciones() {

	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "Opciones", &eden_ec::MenuOpciones::ClickButton, "MenuOptionsClick", this);
	scriptM->SetGlobal(this, "Opciones");
	scriptM = nullptr;

}

void eden_ec::MenuOpciones::Start()
{
	ChangeResolutionText();
	_fullScreenON = eden::SceneManager::getInstance()->FindEntity("fullScreenON");
	_fullScreenOFF = eden::SceneManager::getInstance()->FindEntity("fullScreenOFF");
}

void eden_ec::MenuOpciones::Update(float t)
{
	if (iteration==1) {

		ChangeVolumenBar();
		if (!eden_render::RenderManager::getInstance()->IsFullScreen()) {

			_fullScreenON->GetComponent<CButton>()->Hide();
			_fullScreenOFF->GetComponent<CButton>()->Show();
		}
		else {
			_fullScreenON->GetComponent<CButton>()->Show();
			_fullScreenOFF->GetComponent<CButton>()->Hide();
		}
		eden::SceneManager::getInstance()->FindEntity("muted")->GetComponent<CImage>()->Hide();
	}
	iteration++;
	ChangeResolutionText();
}

void eden_ec::MenuOpciones::GoBack()
{
	eden_ec::GameManager::Instance()->GoBack();
}

void eden_ec::MenuOpciones::FullScreen()
{
	_fullScreenON = eden::SceneManager::getInstance()->FindEntity("fullScreenON");
	_fullScreenOFF = eden::SceneManager::getInstance()->FindEntity("fullScreenOFF");

	if (_fullScreenON->GetComponent<CButton>()->IsVisible()) {

		_fullScreenON->GetComponent<CButton>()->Hide();
		_fullScreenOFF->GetComponent<CButton>()->Show();
	}
	else {
		_fullScreenON->GetComponent<CButton>()->Show();
		_fullScreenOFF->GetComponent<CButton>()->Hide();
	}
	eden_render::RenderManager::getInstance()->FullScreen();
	_fullScreenON->GetComponent<CButton>()->Resize();
	_fullScreenOFF->GetComponent<CButton>()->Resize();
	eden_ec::GameManager::Instance()->GetSound()->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
}

void eden_ec::MenuOpciones::NextResolution()
{
	eden_render::RenderManager::getInstance()->NextResolutuion();
	ChangeResolution();
}

void eden_ec::MenuOpciones::PreviousResolution()
{
	eden_render::RenderManager::getInstance()->PreviousResolution();
	ChangeResolution();
}

void eden_ec::MenuOpciones::ChangeResolution()
{
	ChangeResolutionText();
	eden_render::RenderManager::getInstance()->ChangeResolution();
	eden_ec::GameManager::Instance()->GetSound()->GetComponent<SoundsController>()->PlaySound(SoundsController::ARROW_BUTTON);
}


void eden_ec::MenuOpciones::ChangeResolutionText()
{
	std::pair aux = eden_render::RenderManager::getInstance()->GetResolution();
	std::string text = std::to_string(aux.first) + "x" + std::to_string(aux.second);
	_res = eden::SceneManager::getInstance()->FindEntity("resolutionsText");
	if (_res != nullptr) {
		_res->GetComponent<CText>()->SetNewText(text);
	}
}

void eden_ec::MenuOpciones::IncreaseVolumen()
{
	ChangeVolumen(0.05);
}

void eden_ec::MenuOpciones::DecreaseVolumen()
{
	ChangeVolumen(-0.05);
}

void eden_ec::MenuOpciones::ChangeVolumen(float num)
{
	float aux = eden_audio::AudioManager::GetInstance()->GetGlobalVolume() + num;
	eden_audio::AudioManager::GetInstance()->SetGlobalVolume(aux);
	Muted(aux);
	ChangeVolumenBar();
	eden_ec::GameManager::Instance()->GetSound()->GetComponent<SoundsController>()->PlaySound(SoundsController::ARROW_BUTTON);
}

void eden_ec::MenuOpciones::ChangeVolumenBar()
{
	_vol = eden::SceneManager::getInstance()->FindEntity("volumenBar");
	if (_vol != nullptr) {
		_vol->GetComponent<CBar>()->SetBarPercentage(eden_audio::AudioManager::GetInstance()->GetGlobalVolume() * 100);
		int aux = _vol->GetComponent<CBar>()->GetBarPercentage();
		if (aux <= 33) {
			_vol->GetComponent<CBar>()->SetMaterial("Volume_BarLow.png");
		}
		else if (aux <= 66) {
			_vol->GetComponent<CBar>()->SetMaterial("Volume_Bar.png");
		}
		else {
			_vol->GetComponent<CBar>()->SetMaterial("Volume_BarFull.png");
		}
	}
}
void eden_ec::MenuOpciones::Muted(float v)
{
	if (v <= 0) {
		eden::SceneManager::getInstance()->FindEntity("muted")->GetComponent<CImage>()->Show();
	}
	else {
		eden::SceneManager::getInstance()->FindEntity("muted")->GetComponent<CImage>()->Hide();
	}
	eden::SceneManager::getInstance()->FindEntity("muted")->GetComponent<CImage>()->Resize();
	ChangeResolution();
}

void eden_ec::MenuOpciones::ClickButton()
{
	Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");
	
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
