#include "EnemyActivator.h"
#include "GameManager.h"
#include "CRigidBody.h"
#include "Entity.h"
#include "CRigidBody.h"
#include "LuaManager.h"
#include "ScriptManager.h"
#include "ComponentArguments.h"

const std::string ctp::EnemyActivator::_id = "ENEMY_ACTIVATOR";

ctp::EnemyActivator::EnemyActivator() {

	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "EnemyActivator", &ctp::EnemyActivator::CollisionLine, "CollisionLine", this);

	scriptM->SetGlobal(this, "EnemyActivator");

	scriptM = nullptr;
}

void ctp::EnemyActivator::Start()
{

	_ent->GetComponent<eden_ec::CRigidBody>()->SetTemporalDeactivation(true);
}

void ctp::EnemyActivator::Init(eden_script::ComponentArguments* args)
{
	_activate = args->GetValueToStringVector("ActiveInstanciator");
}

void ctp::EnemyActivator::CollisionLine()
{
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");
	eden_ec::Entity* selfEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "self");

	if (otherEnt->GetEntityID() == "Player_0") {
		ctp::GameManager::Instance()->SwitchInstanciator(selfEnt->GetComponent<EnemyActivator>()->_activate);
	}
}
