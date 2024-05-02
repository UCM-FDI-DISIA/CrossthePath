#define _CRTDBG_MAP_ALLOC
#include "MainMenu.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include "GameManager.h"
#include <SceneManager.h>
#include <RenderManager.h>
#include "CAudioEmitter.h"
#include "CButton.h"
#include "Entity.h"
#include "Transform.h"
#include "CAnimator.h"
#include <InputManager.h> 


const std::string eden_ec::MainMenu::_id = "MAIN_MENU";

eden_ec::MainMenu::MainMenu() {


	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "MainMenu", &eden_ec::MainMenu::Play, "Play", this);
	scriptM->Regist(*this, "MainMenu", &eden_ec::MainMenu::ExitGame, "Exit", this);
	scriptM->Regist(*this, "MainMenu", &eden_ec::MainMenu::Options, "GoToOptions", this);
	scriptM->SetGlobal(this, "MainMenu");
	scriptM = nullptr;
}

void eden_ec::MainMenu::Start()
{
	_start = eden::SceneManager::getInstance()->FindEntity("buttonPlay")->GetComponent<CButton>();
	_startIniPos = _start->GetPosition();
	_start->SetPosition(_startNewPos, _startIniPos.second);

	_exit = eden::SceneManager::getInstance()->FindEntity("buttonExit")->GetComponent<CButton>();
	_exitIniPos = _exit->GetPosition();
	_exitNewPos = eden_render::RenderManager::getInstance()->GetResolution().first;
	_exit->SetPosition(_exitNewPos, _exitIniPos.second);

	_options = eden::SceneManager::getInstance()->FindEntity("buttonOptions")->GetComponent<CButton>();
	_optionsIniPos = _options->GetPosition();
	_options->SetPosition(_optionsNewPos, _optionsIniPos.second);

	_transform = _ent->GetComponent<CTransform>();

	_playerAnimator = eden::SceneManager::getInstance()->FindEntity("Player")->GetComponent<CAnimator>();
	_playerAnimator->PlayAnim("Idle");
	/*_audioEmitter = _ent->GetComponent<CAudioEmitter>();
	_audioEmitter->Play();
	_audioEmitter->SetLoop(true);*/


	eden_input::InputManager::getInstance()->SetActive(false);
}

void eden_ec::MainMenu::Update(float t)
{
	if (currentTime >= timer && !changeAnim) {
		changeAnim = true;
		currentTime = 0; 
		if (wave) {
			_playerAnimator->PlayAnim("Wave");
			wave = false;
		}
		else {
			_playerAnimator->PlayAnim("Yes");
			wave = true;
		}

	}
	else {
		changeAnim = false;
		currentTime += t;
	}

	if (_startNewPos <= _startIniPos.first-3) {
		_startNewPos = _startNewPos + 3;
		_start->SetPosition(_startNewPos, _startIniPos.second);
	}
	if (_exitNewPos >= _exitIniPos.first+4) {
		_exitNewPos = _exitNewPos - 4;
		_exit->SetPosition(_exitNewPos, _exitIniPos.second);
	}
	if (_optionsNewPos <= _optionsIniPos.first-5) {
		_optionsNewPos = _optionsNewPos + 5;
		_options->SetPosition(_optionsNewPos, _optionsIniPos.second);
	}
	else if (!eden_input::InputManager::getInstance()->IsActive())eden_input::InputManager::getInstance()->SetActive(true);


}

void eden_ec::MainMenu::Play()
{
	eden_ec::GameManager::Instance()->Play();
}

void eden_ec::MainMenu::ExitGame()
{
	eden_ec::GameManager::Instance()->CloseGame();
}

void eden_ec::MainMenu::Options()
{
	eden_ec::GameManager::Instance()->GoOptions();
}