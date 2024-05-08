#include "LimitLine.h"
#include "GameManager.h"
#include "CRigidBody.h"
#include "Entity.h"
#include "ScriptManager.h"
#include "LuaManager.h"
#include "CRigidBody.h"

const std::string eden_ec::LimitLine::_id = "LIMIT_LINE";

eden_ec::LimitLine::LimitLine()
{

	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "LimitLine", &eden_ec::LimitLine::CollisionLine, "CollisionLine", this);

	scriptM->SetGlobal(this, "LimitLine");

	scriptM = nullptr;
}

void eden_ec::LimitLine::Start()
{

	_ent->GetComponent<eden_ec::CRigidBody>()->SetTemporalDeactivation(true);
}

void eden_ec::LimitLine::CollisionLine()
{
	//Se obtiene la entidad contra la que se ha chocado
	Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");

	//Si dicha entidad tiene el componente enemyMovement significa que es un coche
	if (otherEnt->GetEntityID() == "Player_0") {
		eden_ec::GameManager::Instance()->PlayerWin();
	}
	else if (otherEnt->HasComponent("ENEMY_MOVEMENT")) {
		eden_ec::GameManager::Instance()->DestroyEnemy(otherEnt);
	}
}
