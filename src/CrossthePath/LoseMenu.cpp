#include "LoseMenu.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include "GameManager.h"
#include <SceneManager.h>
#include <RenderManager.h>
#include "CAudioEmitter.h"
#include "CButton.h"
#include "Entity.h"
#include "CCamera.h"
#include "Transform.h"
#include "CAnimator.h"

const std::string ctp::LoseMenu::_id = "LOSE_MENU";

ctp::LoseMenu::LoseMenu() {
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "loseMenu", &ctp::LoseMenu::Click, "LoseMenuClick", this);
	scriptM->SetGlobal(this, "loseMenu");
	scriptM = nullptr;
}

void ctp::LoseMenu::Start()
{
	_mainMenu = eden::SceneManager::getInstance()->FindEntity("buttonMenu")->GetComponent<eden_ec::CButton>();
	_startIniPos = _mainMenu->GetPosition();
	_mainMenu->SetPosition((float)_startNewPos, _startIniPos.second);

	_exit = eden::SceneManager::getInstance()->FindEntity("buttonExit")->GetComponent<eden_ec::CButton>();
	_exitIniPos = _exit->GetPosition();
	_exitNewPos = eden_render::RenderManager::getInstance()->GetResolution().first;
	_exit->SetPosition((float)_exitNewPos, _exitIniPos.second);

	if (ctp::GameManager::Instance()->GetLevel() == 1) eden::SceneManager::getInstance()->FindEntity("Camera1")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(0, 0, 0, 0);
	else eden::SceneManager::getInstance()->FindEntity("Camera1")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor((float)0.3176, (float)0.8196, (float)0.9647, (float)1);

	_playerAnimator = eden::SceneManager::getInstance()->FindEntity("Player1")->GetComponent<eden_ec::CAnimator>();
	_playerAnimator->PlayAnim("Duck");
	_audioEmitter = _ent->GetComponent<eden_ec::CAudioEmitter>();
	_audioEmitter->Play();
}

void ctp::LoseMenu::Update(float t)
{
	if (_audioEmitter->HasEnded())
	{
		_audioEmitter->ChangeClip("MainMenu.mp3");
		_audioEmitter->Play();
		_audioEmitter->SetLoop(true); 

	}
	if (_currentTime >= _timer && !_changeAnim) {
		_changeAnim = true;
		_currentTime = 0;
		if (_dance) {
			_playerAnimator->PlayAnim("Duck");
			_dance = false;
		}
		else {
			_playerAnimator->PlayAnim("Punch");
			_dance = true;
		}

	}
	else {
		_changeAnim = false;
		_currentTime += t;
	}

	if (_startNewPos <= _startIniPos.first - 3) {
		_startNewPos = _startNewPos + 300*t;
		_mainMenu->SetPosition((float)_startNewPos, _startIniPos.second);
	}
	if (_exitNewPos >= _exitIniPos.first + 4) {
		_exitNewPos = _exitNewPos - 400*t;
		_exit->SetPosition((float)_exitNewPos, _exitIniPos.second);
	}
}

void ctp::LoseMenu::Menu()
{
	ctp::GameManager::Instance()->GoMainMenu();
}

void ctp::LoseMenu::Exit()
{
	ctp::GameManager::Instance()->CloseGame();
}

void ctp::LoseMenu::Retry()
{
	ctp::GameManager::Instance()->GoMainMenu();
}

void ctp::LoseMenu::Click()
{
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");

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
