#include "EasterEgg.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "GameManager.h"
#include <SceneManager.h>
#include <ScriptManager.h>
#include <LuaManager.h>
#include "CButton.h"
#include "ComponentArguments.h"

const std::string eden_ec::EasterEgg::_id = "EASTER_EGGS";

eden_ec::EasterEgg::EasterEgg()
{
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "EasterEggs", &eden_ec::EasterEgg::ClickEasterEggs, "ClickEasterEggs", this);
	scriptM->SetGlobal(this, "EasterEggs");
	scriptM = nullptr;
}

void eden_ec::EasterEgg::Init(eden_script::ComponentArguments* args)
{
	int aux = args->GetValueToInt("Egg");
	if (!eden_ec::GameManager::Instance()->SetEgg(aux, _ent)) {
		hide = true;
	}
}

void eden_ec::EasterEgg::Start()
{
	if(hide)eden::SceneManager::getInstance()->FindEntity("Egg")->GetComponent<CButton>()->Hide();
}


void eden_ec::EasterEgg::ClickEasterEggs()
{
	eden_ec::GameManager::Instance()->AddEasterEgg(luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton"));
	eden::SceneManager::getInstance()->FindEntity("Egg")->GetComponent<CButton>()->Hide();
}
