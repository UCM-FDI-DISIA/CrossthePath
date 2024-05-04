#include "CTPMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "MenuPausa.h"
#include "CharacterMovement.h"
#include "CameraMovement.h"
#include "FinishLine.h"
#include "UIManager.h"
#include "GameManagerController.h"
#include "InstanciateEnemies.h"
#include "MenuOpciones.h"
#include "MainMenu.h"
#include "EnemyMovement.h"
#include "CharacterDie.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<eden_ec::MenuPausa>();
	factory->RegisterComponent<eden_ec::CharacterMovement>();
	factory->RegisterComponent<eden_ec::CameraMovement>();
	factory->RegisterComponent<eden_ec::FinishLine>();
	factory->RegisterComponent<eden_ec::UIManager>();
	factory->RegisterComponent<eden_ec::GameManagerController>();
	factory->RegisterComponent<eden_ec::InstanciateEnemies>();
	factory->RegisterComponent<eden_ec::MenuOpciones>();
	factory->RegisterComponent<eden_ec::MainMenu>();
	factory->RegisterComponent<eden_ec::EnemyMovement>();
	factory->RegisterComponent<eden_ec::CharacterDie>();
}

void LoadScene() {
	eden::SceneManager::getInstance()->PushScene("MainMenu");
}

