#define _CRTDBG_MAP_ALLOC
#include "WinMenu.h"

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

const std::string eden_ec::WinMenu::_id = "WIN_MENU";

eden_ec::WinMenu::WinMenu() {


	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "WinMenu", &eden_ec::WinMenu::Menu, "Menu", this);
	scriptM->Regist(*this, "WinMenu", &eden_ec::WinMenu::Exit, "Exit", this);
	scriptM->SetGlobal(this, "WinMenu");
	scriptM = nullptr;
}

void eden_ec::WinMenu::Start()
{
	_mainMenu = eden::SceneManager::getInstance()->FindEntity("buttonMenu")->GetComponent<CButton>();
	_startIniPos = _mainMenu->GetPosition();
	_mainMenu->SetPosition(_startNewPos, _startIniPos.second);

	_exit = eden::SceneManager::getInstance()->FindEntity("buttonExit")->GetComponent<CButton>();
	_exitIniPos = _exit->GetPosition();
	_exitNewPos = eden_render::RenderManager::getInstance()->GetResolution().first;
	_exit->SetPosition(_exitNewPos, _exitIniPos.second);

	_transform = _ent->GetComponent<CTransform>();

	_playerAnimator = eden::SceneManager::getInstance()->FindEntity("Player_0")->GetComponent<CAnimator>();
	_playerAnimator->PlayAnim("JumpIdle");
	/*_audioEmitter = _ent->GetComponent<CAudioEmitter>();
	_audioEmitter->Play();
	_audioEmitter->SetLoop(true);*/
}

void eden_ec::WinMenu::Update(float t)
{
	if (currentTime >= timer && !changeAnim) {
		changeAnim = true;
		currentTime = 0;
		if (dance) {
			_playerAnimator->PlayAnim("Yes");
			dance = false;
		}
		else {
			_playerAnimator->PlayAnim("JumpIdle");
			dance = true;
		}

	}
	else {
		changeAnim = false;
		currentTime += t;
	}

	if (_startNewPos <= _startIniPos.first - 3) {
		_startNewPos = _startNewPos + 3;
		_mainMenu->SetPosition(_startNewPos, _startIniPos.second);
	}
	if (_exitNewPos >= _exitIniPos.first + 4) {
		_exitNewPos = _exitNewPos - 4;
		_exit->SetPosition(_exitNewPos, _exitIniPos.second);
	}
}

void eden_ec::WinMenu::Menu()
{
	eden_ec::GameManager::Instance()->GoMainMenu();
}

void eden_ec::WinMenu::Exit()
{
	eden_ec::GameManager::Instance()->CloseGame();
}

