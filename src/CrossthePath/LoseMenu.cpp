#define _CRTDBG_MAP_ALLOC
#include "LoseMenu.h"

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

const std::string eden_ec::LoseMenu::_id = "LOSE_MENU";

eden_ec::LoseMenu::LoseMenu() {


	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "loseMenu", &eden_ec::LoseMenu::Click, "LoseMenuClick", this);
	scriptM->SetGlobal(this, "loseMenu");
	scriptM = nullptr;
}

void eden_ec::LoseMenu::Start()
{
	_mainMenu = eden::SceneManager::getInstance()->FindEntity("buttonMenu")->GetComponent<CButton>();
	_startIniPos = _mainMenu->GetPosition();
	_mainMenu->SetPosition(_startNewPos, _startIniPos.second);

	_exit = eden::SceneManager::getInstance()->FindEntity("buttonExit")->GetComponent<CButton>();
	_exitIniPos = _exit->GetPosition();
	_exitNewPos = eden_render::RenderManager::getInstance()->GetResolution().first;
	_exit->SetPosition(_exitNewPos, _exitIniPos.second);

	_transform = _ent->GetComponent<CTransform>();

	_playerAnimator = eden::SceneManager::getInstance()->FindEntity("Player1")->GetComponent<CAnimator>();
	_playerAnimator->PlayAnim("Duck");
	/*_audioEmitter = _ent->GetComponent<CAudioEmitter>();
	_audioEmitter->Play();
	_audioEmitter->SetLoop(true);*/
}

void eden_ec::LoseMenu::Update(float t)
{
	if (currentTime >= timer && !changeAnim) {
		changeAnim = true;
		currentTime = 0;
		if (dance) {
			_playerAnimator->PlayAnim("Duck");
			dance = false;
		}
		else {
			_playerAnimator->PlayAnim("Punch");
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

void eden_ec::LoseMenu::Menu()
{
	eden_ec::GameManager::Instance()->GoMainMenu();
}

void eden_ec::LoseMenu::Exit()
{
	eden_ec::GameManager::Instance()->CloseGame();
}

void eden_ec::LoseMenu::Retry()
{
	eden_ec::GameManager::Instance()->Play();
}

void eden_ec::LoseMenu::Click()
{
	Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");

	if (otherEnt->GetEntityID() == "buttonMenu") {
		Menu();
	}
	else if (otherEnt->GetEntityID() == "buttonExit") {
		Exit();
	}
	else if (otherEnt->GetEntityID() == "buttonRetry") {
		Retry();
	}
}
