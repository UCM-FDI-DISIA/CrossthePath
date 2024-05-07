#define _CRTDBG_MAP_ALLOC
#include "MenuPausa.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include "GameManager.h"
#include "Entity.h"

const std::string eden_ec::MenuPausa::_id = "MENU_PAUSA";

eden_ec::MenuPausa::MenuPausa() {

	
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Pausa", &eden_ec::MenuPausa::Click, "MenuPausaClick", this);
	scriptM->SetGlobal(this, "Pausa");
	scriptM = nullptr;
}

void eden_ec::MenuPausa::ResumeGame()
{
	eden_ec::GameManager::Instance()->GoBack();
}

void eden_ec::MenuPausa::ExitGame()
{
	eden_ec::GameManager::Instance()->CloseGame();
}

void eden_ec::MenuPausa::BackToMenu()
{
	eden_ec::GameManager::Instance()->GoMainMenu();
}

void eden_ec::MenuPausa::Options()
{
	eden_ec::GameManager::Instance()->GoOptions();
}

void eden_ec::MenuPausa::Click()
{
	Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");

	if (otherEnt->GetEntityID() == "buttonResume") {
		ResumeGame();
	}
	else if (otherEnt->GetEntityID() == "buttonMenu") {
		BackToMenu();
	}
	else if (otherEnt->GetEntityID() == "buttonExit") {
		ExitGame();
	}
	else if (otherEnt->GetEntityID() == "options") {
		Options();
	}
}
