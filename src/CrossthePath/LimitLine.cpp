#include "LimitLine.h"
#include "GameManager.h"
#include "CRigidBody.h"
#include "Entity.h"
#include "ScriptManager.h"
#include "LuaManager.h"
#include "CRigidBody.h"

const std::string ctp::LimitLine::_id = "LIMIT_LINE";

ctp::LimitLine::LimitLine()
{

	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "LimitLine", &ctp::LimitLine::CollisionLine, "CollisionLine", this);

	scriptM->SetGlobal(this, "LimitLine");

	scriptM = nullptr;
}

void ctp::LimitLine::Start()
{

	_ent->GetComponent<eden_ec::CRigidBody>()->SetTemporalDeactivation(true);
}

void ctp::LimitLine::CollisionLine()
{
	//Se obtiene la entidad contra la que se ha chocado
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");

	//Si dicha entidad tiene el componente enemyMovement significa que es un coche
	if (otherEnt->GetEntityID() == "Player_0") {
		ctp::GameManager::Instance()->PlayerWin();
	}
	else if (otherEnt->HasComponent("ENEMY_MOVEMENT")) {
		ctp::GameManager::Instance()->DestroyEnemy(otherEnt);
	}
}
