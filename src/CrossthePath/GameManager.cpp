#include "GameManager.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "UIManager.h" 
#include "SoundsController.h"
#include <SceneManager.h>
#include <InputManager.h>
#include <RenderManager.h>
#include "CText.h"
#include "CBar.h"
#include <Scene.h>

eden_ec::GameManager::GameManager()
{
	std::vector<std::pair<int, int>> resolutions;
	resolutions.push_back({ 640,480 });
	resolutions.push_back({ 1280,720 });
	resolutions.push_back({ 960,540 });
	eden_render::RenderManager::getInstance()->SetResolutions(resolutions);

	_states.push_back(MainMenu);
	_currState = _states[0];
}

eden_ec::GameManager::~GameManager()
{
	_enemies.clear();
}

void eden_ec::GameManager::Start()
{
	_sounds = eden::SceneManager::getInstance()->FindEntity("Sounds");
}

void eden_ec::GameManager::Update(float dt) {
	if (_start && _currState == Game && _uiManager!=nullptr)
		_uiManager->GetComponent<UIManager>()->Timer(dt);
}

void eden_ec::GameManager::PlayerWin()
{
	_currState = Win;
	_states[0] = _currState;
	_uiManager->GetComponent<UIManager>()->ShowWin();
}

void eden_ec::GameManager::GameOver()
{
	_currState = Game_Over;
	_states[0] = _currState;
	_uiManager->GetComponent<UIManager>()->ShowGameOver();
}

void eden_ec::GameManager::Play()
{
	if(_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Game;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("EscenaBasicaPruebas");
}

void eden_ec::GameManager::PauseGame()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Pause;
	_states.push_back(_currState);
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("MenuPausa");
}

void eden_ec::GameManager::GoBack()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_states.pop_back();
	_currState = _states[_states.size() - 1];
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PopScene();
}

void eden_ec::GameManager::GoOptions()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Options;
	_states.push_back(_currState);
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("Options");
}

void eden_ec::GameManager::GoMainMenu()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = MainMenu;
	_states[0] = _currState;
	_start = false;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("MainMenu");
}

void eden_ec::GameManager::CloseGame()
{
	_currState = Exit;
	_states[0] = _currState;
	eden_input::InputManager::getInstance()->SetCloseWindow();
}

eden_ec::Entity* eden_ec::GameManager::GetSound()
{
	return _sounds;
}

eden_ec::Entity* eden_ec::GameManager::GetPlayer()
{
	return _player;
}

std::unordered_map<std::string, eden_ec::Entity*>* eden_ec::GameManager::GetEnemies()
{
	return &_enemies;
}

void eden_ec::GameManager::DestroyEnemy(std::string enemyID)
{
	auto it = _enemies.find(enemyID);
	if (it != _enemies.end())
	{
		delete it->second;
	}
	else
	{
		//excepcion?
	}
}
void eden_ec::GameManager::Begin()
{
	_start = true;
	_player = eden::SceneManager::getInstance()->FindEntity("Player");
	_uiManager = eden::SceneManager::getInstance()->FindEntity("UI_Manager");
}
