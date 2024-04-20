#include "GameManager.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include <SceneManager.h>

const std::string eden_ec::GameManager::_id = "GAME_MANAGER";
void eden_ec::GameManager::Start() {

}

eden_ec::GameManager::~GameManager()
{
	eden_ec::GameManager::Close();
}

void eden_ec::GameManager::Init(eden_script::ComponentArguments* args) {
}

void eden_ec::GameManager::Update(float dt) {

}

void eden_ec::GameManager::PlayerWin()
{
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("Menu");
}

eden_ec::Entity* eden_ec::GameManager::GetPlayer()
{
	return _player;
}

void eden_ec::GameManager::SetPlayer(Entity* pl)
{
	_player = pl;
}
