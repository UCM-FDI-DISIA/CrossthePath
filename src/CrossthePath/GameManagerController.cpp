#include "GameManagerController.h"
#define _CRTDBG_MAP_ALLOC
#include "GameManager.h"

const std::string eden_ec::GameManagerController::_id = "GAME_MANAGER";
eden_ec::GameManagerController::GameManagerController() {
	eden_ec::GameManager::Instance();
}

eden_ec::GameManagerController::~GameManagerController()
{
	eden_ec::GameManager::Instance()->Close();
}

void eden_ec::GameManagerController::Update(float dt) {
	eden_ec::GameManager::Instance()->Update(dt);
}
