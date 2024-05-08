#include "FinishLine.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "Transform.h"
#include "CRigidBody.h"
#include "GameManager.h"
#include "SceneManager.h"
#include "ComponentArguments.h"
#include "LuaManager.h"
#include"ScriptManager.h"

const std::string eden_ec::FinishLine::_id = "FINISH_LINE";
void eden_ec::FinishLine::Init(eden_script::ComponentArguments* args)
{
}
void eden_ec::FinishLine::Start() {

	// PRUEBA TRIGGER/COLISION
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::Instance()->GetLuaManager();	
	scriptM->Regist(*this, "FinishLine", &eden_ec::FinishLine::Collision, "CollisionLine", this);
	scriptM->SetGlobal(this, "FinishLine");
	scriptM = nullptr;
}

void eden_ec::FinishLine::Collision()
{
	Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");
	if (otherEnt->GetEntityID() == "Player_0") {
		eden_ec::GameManager::Instance()->PlayerWin();
	}
	else {
		eden_ec::GameManager::Instance()->DestroyEnemy(otherEnt->GetEntityID());
	}
}

