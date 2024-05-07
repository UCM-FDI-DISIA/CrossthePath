#include "GameManagerController.h"
#define _CRTDBG_MAP_ALLOC
#include "GameManager.h"
#include "SceneManager.h"
#include "Entity.h"


const std::string eden_ec::GameManagerController::_id = "GAME_MANAGER";

eden_ec::GameManagerController::GameManagerController() {

	_gameManager = eden_ec::GameManager::Instance();
}

eden_ec::GameManagerController::~GameManagerController()
{
	if(original)eden_ec::GameManager::Instance()->Close();
}

void eden_ec::GameManagerController::Update(float dt) {
	_gameManager->Update(dt);
}

void eden_ec::GameManagerController::Awake()
{
}

void eden_ec::GameManagerController::Start()
{
	if (eden::SceneManager::getInstance()->AddEntityToDontDestroyOnLoad(_ent)) {
		original = true;
		_gameManager->Start();
	}
}
