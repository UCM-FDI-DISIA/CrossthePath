#include "GameManagerController.h"
#include "GameManager.h"
#include "SceneManager.h"
#include "Entity.h"


const std::string ctp::GameManagerController::_id = "GAME_MANAGER";

ctp::GameManagerController::GameManagerController() {
	_gameManager = ctp::GameManager::Instance();
}

ctp::GameManagerController::~GameManagerController()
{
	if(original)ctp::GameManager::Instance()->Close();
}

void ctp::GameManagerController::Update(float dt) {
	_gameManager->Update(dt);
}

void ctp::GameManagerController::Awake()
{
}

void ctp::GameManagerController::Start()
{
	if (eden::SceneManager::getInstance()->AddEntityToDontDestroyOnLoad(_ent)) {
		original = true;
		_gameManager->Start();
	}
}
