#include "CTPMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "Hito2MenuPausa.h"
#include "CharacterMovement.h"
#include "CameraMovement.h"
#include "FinishLine.h"
#include "UIManager.h"
#include "GameManagerController.h"
#include "UIManagerComponent.h"
#include "InstanciateEnemies.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<eden_ec::Hito2MenuPausa>();
	factory->RegisterComponent<eden_ec::CharacterMovement>();
	factory->RegisterComponent<eden_ec::CameraMovement>();
	factory->RegisterComponent<eden_ec::FinishLine>();
	factory->RegisterComponent<eden_ec::UIManager>();
	factory->RegisterComponent<eden_ec::GameManagerController>();
	factory->RegisterComponent<eden_ec::UIManagerComponent>();
	factory->RegisterComponent<eden_ec::InstanciateEnemies>();
}

void LoadScene() {
	eden::SceneManager::getInstance()->PushScene("Menu");
}

