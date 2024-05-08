#include "CTPMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "MenuPausa.h"
#include "CharacterMovement.h"
#include "CameraMovement.h"
#include "UIManager.h"
#include "GameManagerController.h"
#include "InstanciateEnemies.h"
#include "MenuOpciones.h"
#include "MainMenu.h"
#include "WinMenu.h"
#include "LoseMenu.h"
#include "EnemyMovement.h"
#include "CharacterDie.h"
#include "SoundsController.h"
#include "EasterEgg.h"

#include "LimitLine.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<eden_ec::MenuPausa>();
	factory->RegisterComponent<eden_ec::CharacterMovement>();
	factory->RegisterComponent<eden_ec::CameraMovement>();
	factory->RegisterComponent<eden_ec::UIManager>();
	factory->RegisterComponent<eden_ec::GameManagerController>();
	factory->RegisterComponent<eden_ec::InstanciateEnemies>();
	factory->RegisterComponent<eden_ec::MenuOpciones>();
	factory->RegisterComponent<eden_ec::MainMenu>();
	factory->RegisterComponent<eden_ec::WinMenu>();
	factory->RegisterComponent<eden_ec::LoseMenu>();
	factory->RegisterComponent<eden_ec::EnemyMovement>();
	factory->RegisterComponent<eden_ec::CharacterDie>();
	factory->RegisterComponent<eden_ec::SoundsController>();
	factory->RegisterComponent<eden_ec::EasterEgg>();

	factory->RegisterComponent<eden_ec::LimitLine>();
}

void LoadScene() {
	//eden::SceneManager::getInstance()->PushScene("EscenaBasicaPruebas");
	eden::SceneManager::getInstance()->PushScene("MainMenu");
	//eden::SceneManager::getInstance()->PushScene("WinMenuScene");
}

