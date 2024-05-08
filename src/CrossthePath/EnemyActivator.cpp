#include "EnemyActivator.h"
#include "GameManager.h"
#include "CRigidBody.h"
#include "Entity.h"
#include "CRigidBody.h"
#include "LuaManager.h"
#include "ScriptManager.h"
#include "ComponentArguments.h"

const std::string ctp::EnemyActivator::_id = "ENEMY_ACTIVATOR";

void ctp::EnemyActivator::Init(eden_script::ComponentArguments* args)
{
	_activate = args->GetValueToStringVector("ActiveInstanciator");
}

void ctp::EnemyActivator::CollisionLine()
{
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");

	if (otherEnt->GetEntityID() == "Player_0") {
		ctp::GameManager::Instance()->SwitchInstanciator(_activate);
	}
}
