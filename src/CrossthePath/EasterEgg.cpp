#include "EasterEgg.h"
#include "Entity.h"
#include "GameManager.h"
#include <SceneManager.h>
#include <ScriptManager.h>
#include <LuaManager.h>
#include "CButton.h"
#include "ComponentArguments.h"

const std::string ctp::EasterEgg::_id = "EASTER_EGGS";

ctp::EasterEgg::EasterEgg()
{
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "EasterEggs", &ctp::EasterEgg::ClickEasterEggs, "ClickEasterEggs", this);
	scriptM->SetGlobal(this, "EasterEggs");
	scriptM = nullptr;
}

void ctp::EasterEgg::Init(eden_script::ComponentArguments* args)
{
	int aux = args->GetValueToInt("Egg");
	if (!ctp::GameManager::Instance()->SetEgg(aux, _ent)) {
		hide = true;
	}
}

void ctp::EasterEgg::Start()
{
	if(hide) eden::SceneManager::getInstance()->FindEntity("Egg")->GetComponent<eden_ec::CButton>()->Hide();
}


void ctp::EasterEgg::ClickEasterEggs()
{
	ctp::GameManager::Instance()->AddEasterEgg(luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton"));
	eden::SceneManager::getInstance()->FindEntity("Egg")->GetComponent<eden_ec::CButton>()->Hide();
}
