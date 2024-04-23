#include "GameManagerController.h"
#define _CRTDBG_MAP_ALLOC
#include "GameManager.h"
#include "InputManager.h"
#include "EdenMaster.h"
#include "SceneManager.h"
#include "Scene.h"

const std::string eden_ec::GameManagerController::_id = "GAME_MANAGER";

eden_ec::GameManagerController::GameManagerController() {

	_gameManager = eden_ec::GameManager::Instance();
}

eden_ec::GameManagerController::~GameManagerController()
{
	eden_ec::GameManager::Instance()->Close();
}

void eden_ec::GameManagerController::Update(float dt) {
	_gameManager->Update(dt);
}

void eden_ec::GameManagerController::Awake()
{
}

void eden_ec::GameManagerController::Start()
{
	eden::SceneManager::getInstance()->GetCurrentScene()->RemoveGameObject(_ent);
	eden::SceneManager::getInstance()->GeDontDestroyOnLoadScene()->AddExistingGameObject(_ent);
	_gameManager->Start();
}
