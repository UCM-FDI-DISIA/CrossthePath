#include "GameManager.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "UIManager.h" 
#include <SceneManager.h>


eden_ec::GameManager::GameManager(){
}

eden_ec::GameManager::~GameManager()
{
	
}

void eden_ec::GameManager::Awake()
{

}

void eden_ec::GameManager::Start()
{
}

void eden_ec::GameManager::Update(float dt) {
	if(_start)_uiManager->Timer(dt);
}

void eden_ec::GameManager::PlayerWin()
{
	_uiManager->ShowWin();
}

void eden_ec::GameManager::PlayAgain()
{
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("CrossThePathFinal");
}

eden_ec::UIManager* eden_ec::GameManager::GetUI()
{
	return _uiManager;
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

void eden_ec::GameManager::SetPlayer(Entity* pl)
{
	_player = pl;
}

void eden_ec::GameManager::SetUI(UIManager* ui)
{
	_uiManager = ui;
}

void eden_ec::GameManager::Begin()
{
	_start = true;
}
