#define _CRTDBG_MAP_ALLOC
#include "MainMenu.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include "GameManager.h"

const std::string eden_ec::MainMenu::_id = "MAIN_MENU";

eden_ec::MainMenu::MainMenu() {


	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "MainMenu", &eden_ec::MainMenu::Play, "Play", this);
	scriptM->Regist(*this, "MainMenu", &eden_ec::MainMenu::ExitGame, "Exit", this);
	scriptM->Regist(*this, "MainMenu", &eden_ec::MainMenu::Options, "GoToOptions", this);
	scriptM->SetGlobal(this, "MainMenu");
	scriptM = nullptr;
}

void eden_ec::MainMenu::Play()
{
	eden_ec::GameManager::Instance()->Play();
}

void eden_ec::MainMenu::ExitGame()
{
	eden_ec::GameManager::Instance()->CloseGame();
}

void eden_ec::MainMenu::Options()
{
	eden_ec::GameManager::Instance()->GoOptions();
}