#include "MenuPausa.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include "GameManager.h"
#include "Entity.h"
#include <CAudioEmitter.h>

const std::string ctp::MenuPausa::_id = "MENU_PAUSA";

ctp::MenuPausa::MenuPausa() {

	
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Pausa", &ctp::MenuPausa::Click, "MenuPausaClick", this);
	scriptM->SetGlobal(this, "Pausa");
	scriptM = nullptr;
}

void ctp::MenuPausa::Start()
{
	_audioEmitter = _ent->GetComponent<eden_ec::CAudioEmitter>();
	_audioEmitter->Play();
	_audioEmitter->SetLoop(true);
}

void ctp::MenuPausa::ResumeGame()
{
	ctp::GameManager::Instance()->GoBack();
}

void ctp::MenuPausa::ExitGame()
{
	ctp::GameManager::Instance()->CloseGame();
}

void ctp::MenuPausa::BackToMenu()
{
	ctp::GameManager::Instance()->GoMainMenu();
}

void ctp::MenuPausa::Options()
{
	ctp::GameManager::Instance()->GoOptions();
}

void ctp::MenuPausa::Click()
{
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");

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
