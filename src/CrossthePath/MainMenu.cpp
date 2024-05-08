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
#include "CText.h"
#include "CIMage.h"
#include "SoundsController.h"
#include "CCamera.h"

const std::string ctp::MainMenu::_id = "MAIN_MENU";

ctp::MainMenu::MainMenu() {


	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "mainMenu", &ctp::MainMenu::Click, "MainMenuClick", this);
	scriptM->SetGlobal(this, "mainMenu");
	scriptM = nullptr;
}

void ctp::MainMenu::Start()
{
	_start = eden::SceneManager::getInstance()->FindEntity("buttonPlay")->GetComponent<eden_ec::CButton>();
	_startIniPos = _start->GetPosition();
	_start->SetPosition(_startNewPos, _startIniPos.second);

	_exit = eden::SceneManager::getInstance()->FindEntity("buttonExit")->GetComponent<eden_ec::CButton>();
	_exitIniPos = _exit->GetPosition();
	_exitNewPos = eden_render::RenderManager::getInstance()->GetResolution().first;
	_exit->SetPosition(_exitNewPos, _exitIniPos.second);

	_options = eden::SceneManager::getInstance()->FindEntity("buttonOptions")->GetComponent<eden_ec::CButton>();
	_optionsIniPos = _options->GetPosition();
	_options->SetPosition(_optionsNewPos, _optionsIniPos.second);

	_transform = _ent->GetComponent<eden_ec::CTransform>();

	_playerAnimator = eden::SceneManager::getInstance()->FindEntity("Rana")->GetComponent<eden_ec::CAnimator>();
	_playerAnimator->PlayAnim("Idle");
	_audioEmitter = _ent->GetComponent<eden_ec::CAudioEmitter>();
	_audioEmitter->Play();
	_audioEmitter->SetLoop(true);

	_gameManager = ctp::GameManager::Instance();
	int aux = _gameManager->GetBestScore();
	if (aux > 0)
		eden::SceneManager::getInstance()->FindEntity("ScoreText")->GetComponent<eden_ec::CText>()->SetNewText("Best Score: " + std::to_string(aux),false);
	else 
		eden::SceneManager::getInstance()->FindEntity("ScoreText")->GetComponent<eden_ec::CText>()->SetNewText(" ", false);

	_easterEggs = eden::SceneManager::getInstance()->FindEntity("EasterEggsText")->GetComponent<eden_ec::CText>();

	if (_gameManager->GetLevel() == 1)SetDarkMode();
	else SetDayMode();
	//eden_input::InputManager::getInstance()->SetActive(false);
}

void ctp::MainMenu::Update(float t)
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

	if (!_endTransition) {
		if (_startNewPos <= _startIniPos.first - 3) {
			_startNewPos = _startNewPos + 3;
			_start->SetPosition(_startNewPos, _startIniPos.second);
		}
		if (_exitNewPos >= _exitIniPos.first + 4) {
			_exitNewPos = _exitNewPos - 4;
			_exit->SetPosition(_exitNewPos, _exitIniPos.second);
		}
		if (_optionsNewPos <= _optionsIniPos.first - 5) {
			_optionsNewPos = _optionsNewPos + 5;
			_options->SetPosition(_optionsNewPos, _optionsIniPos.second);
		}
		else if (!eden_input::InputManager::getInstance()->IsActive())
		{
			eden_input::InputManager::getInstance()->SetActive(true);
			_endTransition = true;
			_start->SetPosition(_startIniPos.first, _startIniPos.second);
			_exit->SetPosition(_exitIniPos.first, _exitIniPos.second);
			_options->SetPosition(_optionsIniPos.first, _optionsIniPos.second);
		}
	}
	if (iteration == 1) {

		if (!_gameManager->IsEasterEggComplete()) {
			_trophy = eden::SceneManager::getInstance()->FindEntity("Trophy");
			_trophy->GetComponent<eden_ec::CImage>()->Hide();
		}
		else {
			_esterEggNum = _gameManager->GetEasterEggs();
			_easterEggs->SetNewText("EasterEggs: " + std::to_string(_esterEggNum) + "/3", false);

		}
	}
	if (iteration>=1) {
		UpdateEasterEggs();
	}
	iteration++;
}

void ctp::MainMenu::GameMode()
{
	if (ctp::GameManager::Instance()->GetLevel() == 0) {
		SetDarkMode();
	}
	else SetDayMode();
	ctp::GameManager::Instance()->ChangeLevel();
}

void ctp::MainMenu::Play()
{
	ctp::GameManager::Instance()->Play();
}

void ctp::MainMenu::ExitGame()
{
	ctp::GameManager::Instance()->CloseGame();
}

void ctp::MainMenu::Options()
{
	ctp::GameManager::Instance()->GoOptions();
}

void ctp::MainMenu::UpdateEasterEggs()
{
	if (!_gameManager->IsEasterEggComplete() && _esterEggNum != _gameManager->GetEasterEggs()) {
		_esterEggNum = _gameManager->GetEasterEggs();
		_easterEggs->SetNewText("EasterEggs: " + std::to_string(_esterEggNum) + "/3", false);
		if (_esterEggNum == 3) {
			ctp::GameManager::Instance()->GetSound()->GetComponent<SoundsController>()->PlaySound(SoundsController::EASTEREGG_TROPHY);
			_gameManager->CompleteEasterEgg();
			eden_ec::CImage* aux = _trophy->GetComponent<eden_ec::CImage>();
			aux->Show();
			aux->Resize();
			eden_render::RenderManager::getInstance()->ResizedWindow();
		}
	}
}

void ctp::MainMenu::Click()
{
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");

	if (otherEnt->GetEntityID() == "buttonPlay") {
		Play();
	}
	else if (otherEnt->GetEntityID() == "buttonExit") {
		ExitGame();
	}
	else if (otherEnt->GetEntityID() == "buttonOptions") {
		Options();
	}
	else if (otherEnt->GetEntityID() == "level") {
		GameMode();
	}
}

void ctp::MainMenu::SetDarkMode()
{
	eden::SceneManager::getInstance()->FindEntity("buttonPlay")->GetComponent<eden_ec::CButton>()->ChangeTextures("DarkPlay.png", "DarkPlayOver.png", "DarkPlayClicked.png");

	eden::SceneManager::getInstance()->FindEntity("buttonExit")->GetComponent<eden_ec::CButton>()->ChangeTextures("DarkExit.png", "DarkExitOver.png", "DarkExitClicked.png");

	eden::SceneManager::getInstance()->FindEntity("buttonOptions")->GetComponent<eden_ec::CButton>()->ChangeTextures("DarkOptions.png", "DarkOptionsOver.png", "DarkOptionsClicked.png");

	eden::SceneManager::getInstance()->FindEntity("level")->GetComponent<eden_ec::CButton>()->ChangeTextures("Sun.png", "Sun2.png", "Sun2.png");

	eden::SceneManager::getInstance()->FindEntity("CameraMenu")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(0, 0, 0, 0);
}

void ctp::MainMenu::SetDayMode()
{
	eden::SceneManager::getInstance()->FindEntity("buttonPlay")->GetComponent<eden_ec::CButton>()->ChangeTextures("Play_Button.png", "PlayOver_Button.png", "PlayClicked_Button.png");

	eden::SceneManager::getInstance()->FindEntity("buttonExit")->GetComponent<eden_ec::CButton>()->ChangeTextures("Exit_Button.png", "ExitOver_Button.png", "ExitClicked_Button.png");

	eden::SceneManager::getInstance()->FindEntity("buttonOptions")->GetComponent<eden_ec::CButton>()->ChangeTextures("Settings_Button.png", "SettingsOver_Button.png", "SettingsClicked_Button.png");

	eden::SceneManager::getInstance()->FindEntity("level")->GetComponent<eden_ec::CButton>()->ChangeTextures("Moon.png", "Moon2.png", "Moon2.png");

	eden::SceneManager::getInstance()->FindEntity("CameraMenu")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(0.3176, 0.8196, 0.9647, 1);
}
