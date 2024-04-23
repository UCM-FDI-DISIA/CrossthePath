#define _CRTDBG_MAP_ALLOC
#include "MenuPausa.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include "GameManager.h"

const std::string eden_ec::MenuPausa::_id = "PAUSA";

eden_ec::MenuPausa::MenuPausa() {

	
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Pausa", &eden_ec::MenuPausa::ResumeGame, "Resume", this);
	scriptM->Regist(*this, "Pausa", &eden_ec::MenuPausa::ExitGame, "Exit", this);
	scriptM->Regist(*this, "Pausa", &eden_ec::MenuPausa::BackToMenu, "BackMenu", this);
	scriptM->Regist(*this, "Pausa", &eden_ec::MenuPausa::Pause, "PauseGame", this);
	scriptM->Regist(*this, "Pausa", &eden_ec::MenuPausa::Options, "GoToOptions", this);
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

void eden_ec::MenuPausa::Pause()
{
	eden_ec::GameManager::Instance()->PauseGame();
}

void eden_ec::MenuPausa::Options()
{
	eden_ec::GameManager::Instance()->GoOptions();
}