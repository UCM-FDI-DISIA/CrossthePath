#include "GameManager.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"

const std::string eden_ec::GameManager::_id = "GAMEMANAGER";
void eden_ec::GameManager::Start() {

}

void eden_ec::GameManager::Init(eden_script::ComponentArguments* args) {
}

void eden_ec::GameManager::Update(float dt) {

}

eden_ec::Entity* eden_ec::GameManager::GetPlayer()
{
	return _player;
}

void eden_ec::GameManager::SetPlayer(Entity* pl)
{
	_player = pl;
}
