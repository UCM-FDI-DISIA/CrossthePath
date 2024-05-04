#define _CRTDBG_MAP_ALLOC
#include "MenuOpciones.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include <RenderManager.h>
#include "GameManager.h"
#include <SceneManager.h>
#include "Entity.h"
#include "CText.h"
#include "CBar.h"
#include <AudioManager.h>
#include "CAudioEmitter.h"

const std::string eden_ec::MenuOpciones::_id = "OPCIONES";

eden_ec::MenuOpciones::MenuOpciones() {

	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "Opciones", &eden_ec::MenuOpciones::GoBack, "GoBack", this);
	scriptM->Regist(*this, "Opciones", &eden_ec::MenuOpciones::FullScreen, "FullScreen", this);
	scriptM->Regist(*this, "Opciones", &eden_ec::MenuOpciones::NextResolution, "NextRes", this);
	scriptM->Regist(*this, "Opciones", &eden_ec::MenuOpciones::PreviousResolution, "PreviousRes", this);
	scriptM->Regist(*this, "Opciones", &eden_ec::MenuOpciones::IncreaseVolumen, "IncreaseV", this);
	scriptM->Regist(*this, "Opciones", &eden_ec::MenuOpciones::DecreaseVolumen, "DecreaseV", this);
	scriptM->SetGlobal(this, "Opciones");
	scriptM = nullptr;

}

void eden_ec::MenuOpciones::Start()
{
	ChangeResolutionText();
}

void eden_ec::MenuOpciones::Update(float t)
{
	if (iteration==1) {

		ChangeVolumenBar();
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
	eden_render::RenderManager::getInstance()->FullScreen();
}

void eden_ec::MenuOpciones::NextResolution()
{
	_res = eden::SceneManager::getInstance()->FindEntity("resolutionsText");
	eden_ec::CAudioEmitter* em = _res->GetComponent<CAudioEmitter>();
	em->Play();
	eden_render::RenderManager::getInstance()->NextResolutuion();
	ChangeResolution();
}

void eden_ec::MenuOpciones::PreviousResolution()
{
	_res = eden::SceneManager::getInstance()->FindEntity("resolutionsText");
	eden_ec::CAudioEmitter* em = _res->GetComponent<CAudioEmitter>();
	em->Play();
	eden_render::RenderManager::getInstance()->PreviousResolution();
	ChangeResolution();
}

void eden_ec::MenuOpciones::ChangeResolution()
{
	eden_render::RenderManager::getInstance()->ChangeResolution();
	ChangeResolutionText();

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
	_vol = eden::SceneManager::getInstance()->FindEntity("volumenBar");
	eden_ec::CAudioEmitter* em = _vol->GetComponent<CAudioEmitter>();
	em->Play();
	ChangeVolumen(5);
}

void eden_ec::MenuOpciones::DecreaseVolumen()
{
	_vol = eden::SceneManager::getInstance()->FindEntity("volumenBar");
	eden_ec::CAudioEmitter* em = _vol->GetComponent<CAudioEmitter>();
	em->Play();
	ChangeVolumen(-5);
}

void eden_ec::MenuOpciones::ChangeVolumen(int num)
{
	float aux = eden_audio::AudioManager::GetInstance()->GetGlobalVolume() * 100 + num;
	eden_audio::AudioManager::GetInstance()->SetGlobalVolume(aux/100);
	ChangeVolumenBar();
}

void eden_ec::MenuOpciones::ChangeVolumenBar()
{
	_vol = eden::SceneManager::getInstance()->FindEntity("volumenBar");
	if (_vol != nullptr) {
		_vol->GetComponent<CBar>()->SetBarPercentage(eden_audio::AudioManager::GetInstance()->GetGlobalVolume() * 100);
	}
}
