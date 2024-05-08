#include "GameManager.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "UIManager.h" 
#include "SoundsController.h"
#include <SceneManager.h>
#include <InputManager.h>
#include <RenderManager.h>
#include "InstanciateEnemies.h"
#include "CText.h"
#include "CBar.h"
#include <Scene.h>

ctp::GameManager::GameManager()
{
	std::vector<std::pair<int, int>> resolutions;
	resolutions.push_back({ 640,480 });
	resolutions.push_back({ 1280,720 });
	resolutions.push_back({ 960,540 });
	eden_render::RenderManager::getInstance()->SetResolutions(resolutions);

	_states.push_back(MainMenu);
	_currState = _states[0];
}

ctp::GameManager::~GameManager()
{
	_enemies.clear();
}

void ctp::GameManager::Start()
{
	_sounds = eden::SceneManager::getInstance()->FindEntity("Sounds");
}

void ctp::GameManager::Update(float dt) {
	if (_start && _currState == Game && _uiManager!=nullptr)
		_uiManager->GetComponent<UIManager>()->Timer(dt);
}

void ctp::GameManager::PlayerWin()
{
	_currState = Win;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("WinMenuScene");
}

void ctp::GameManager::GameOver()
{
	_currState = Game_Over;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("LoseMenuScene");
}

void ctp::GameManager::Play()
{
	if(_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Game;
	_start = false;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	if (_level == 0) {
		scnManager->ChangeScene("Nivel2");
	}
	else scnManager->ChangeScene("Nivel2");
}

void ctp::GameManager::PauseGame()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Pause;
	_states.push_back(_currState);
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("MenuPausa");
}

void ctp::GameManager::GoBack()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_states.pop_back();
	_currState = _states[_states.size() - 1];
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PopScene();
}

void ctp::GameManager::GoOptions()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Options;
	_states.push_back(_currState);
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("Options");
}

void ctp::GameManager::GoMainMenu()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = MainMenu;
	_states[0] = _currState;
	_start = false;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("MainMenu");
}

void ctp::GameManager::CloseGame()
{
	_currState = Exit;
	_states[0] = _currState;
	eden_input::InputManager::getInstance()->SetCloseWindow();
}

eden_ec::Entity* ctp::GameManager::GetSound()
{
	return _sounds;
}

void ctp::GameManager::AddEnemy(eden_ec::Entity* ent)
{
	_enemies.push_back(ent);
}

void ctp::GameManager::DestroyEnemy(eden_ec::Entity* ent)
{
	_enemies.remove(ent);
	ent->SetAlive(false);
}

void ctp::GameManager::Begin()
{
	_start = true;
	//_player = eden::SceneManager::getInstance()->FindEntity("Player");
	_uiManager = eden::SceneManager::getInstance()->FindEntity("UI_Manager");
}

void ctp::GameManager::AddEasterEgg(eden_ec::Entity* egg)
{
	_easterEggs++;
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::EASTEREGG);

	for (int i = 0; i < _eggsFound.size(); i++) {
		if (_eggsFound[i].second == egg) {
			_eggsFound[i].first = true;
			break;
		}
	}
}

bool ctp::GameManager::SetEgg(int num, eden_ec::Entity* egg)
{
	if (!_eggsFound[num].first) {
		_eggsFound[num] = { false,egg };
		return true;
	}
	else return false;

}

void ctp::GameManager::SwitchInstanciator(std::vector<std::string> id) {
	auto it = _instanciators.begin();
	bool found = false;
	while (it != _instanciators.end() && !found) {
		for (int i = 0; i < id.size(); ++i) {
			if (id[i] == (*it)->GetEntityID()) {
				(*it)->GetComponent<ctp::InstanciateEnemies>()->SetActive(true);
			}
			else {
				(*it)->GetComponent<ctp::InstanciateEnemies>()->SetActive(false);
				++it;
			} 
		}
	}
}

void ctp::GameManager::AddInstanciator(eden_ec::Entity* inst) {
	_instanciators.push_back(inst);
}