#include "GameManager.h"
#include "Entity.h"
#include "UIManager.h" 
#include "SoundsController.h"
#include <SceneManager.h>
#include <InputManager.h>
#include <RenderManager.h>
#include "InstanciateEnemies.h"
#include <Scene.h>
#include "CameraMovement.h"
#include <NetworkManager.h>
#include <iostream>

#include <fstream>

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
	ClearInstanciator();
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
	if(_currScore > _bestScore)
		_bestScore = _currScore;
	_currState = Win;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("WinMenuScene");
	ClearInstanciator();
}

void ctp::GameManager::GameOver()
{
	_currState = Game_Over;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("LoseMenuScene");
	ClearInstanciator();
}

void ctp::GameManager::PlayAsHost()
{
	if(_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Game;
	_start = false;
	_currScore = _timer;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	if (_level == 0) {
		std::ifstream configFile("config.txt");
		std::string _hostIP = "localhost";
		int _port = 12345; // Valor por defecto para el puerto

		if (configFile.is_open()) {
			// Si el archivo existe y se puede abrir, lee la IP y el puerto
			configFile >> _hostIP >> _port;
			configFile.close();
		}
		else {
			// Si el archivo no existe, se usa un valor por defecto para el host
			_hostIP = ""; // Suponiendo que tu l�gica interna maneja un host vac�o como "no host"
			std::cout << "Archivo de configuraci�n no encontrado. Usando configuraci�n por defecto." << std::endl;
		}

		// Suponiendo que tienes estas funciones implementadas
		eden_net::NetworkManager::Instance()->InitNetwork(_port, _hostIP);
		scnManager->ChangeScene("NivelCoop");
	}
	else scnManager->ChangeScene("Nivel2");
	ClearInstanciator();
}

void ctp::GameManager::PlayAsGuest()
{
	if (_sounds)_sounds->GetComponent<SoundsController>()->PlaySound(SoundsController::PLAY_BUTTON);
	_currState = Game;
	_start = false;
	_currScore = _timer;
	_states[0] = _currState;
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	if (_level == 0) {
		std::string _hostIP = "";
		int _port = 12345; // Valor por defecto para el puerto
		// Suponiendo que tienes estas funciones implementadas
		eden_net::NetworkManager::Instance()->InitNetwork(_port, _hostIP);
		scnManager->ChangeScene("NivelCoop");
	}
	else scnManager->ChangeScene("Nivel2");
	ClearInstanciator();
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
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("MainMenu");
	ClearInstanciator();
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
	eden::SceneManager::getInstance()->FindEntity("Camera_0")->GetComponent<CameraMovement>()->GoToPlayer();;
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

	for (auto instanciator : _instanciators) {
		instanciator->GetComponent<InstanciateEnemies>()->SetActive(false);
	}

	for (int i = 0; i < id.size(); ++i) {
		auto it = _instanciators.begin();
		while (it != _instanciators.end() && !(id[i] == (*it)->GetEntityID())) ++it;
		if(it != _instanciators.end()) (*it)->GetComponent<InstanciateEnemies>()->SetActive(true);
	}
}

void ctp::GameManager::ClearInstanciator() {
	_instanciators.clear();
}

void ctp::GameManager::AddInstanciator(eden_ec::Entity* inst) {
	_instanciators.push_back(inst);
}