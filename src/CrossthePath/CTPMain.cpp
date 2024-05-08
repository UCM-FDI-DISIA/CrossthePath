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
#include "EnemyActivator.h"
#include "LimitLine.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<ctp::MenuPausa>();
	factory->RegisterComponent<ctp::CharacterMovement>();
	factory->RegisterComponent<ctp::CameraMovement>();
	factory->RegisterComponent<ctp::UIManager>();
	factory->RegisterComponent<ctp::GameManagerController>();
	factory->RegisterComponent<ctp::InstanciateEnemies>();
	factory->RegisterComponent<ctp::MenuOpciones>();
	factory->RegisterComponent<ctp::MainMenu>();
	factory->RegisterComponent<ctp::WinMenu>();
	factory->RegisterComponent<ctp::LoseMenu>();
	factory->RegisterComponent<ctp::EnemyMovement>();
	factory->RegisterComponent<ctp::CharacterDie>();
	factory->RegisterComponent<ctp::SoundsController>();
	factory->RegisterComponent<ctp::EasterEgg>();
	factory->RegisterComponent<ctp::EnemyActivator>();
	factory->RegisterComponent<ctp::LimitLine>();
}

void LoadScene() {
	//eden::SceneManager::getInstance()->PushScene("EscenaBasicaPruebas");
	//eden::SceneManager::getInstance()->PushScene("MainMenu");
	eden::SceneManager::getInstance()->PushScene("MainMenu");
}

