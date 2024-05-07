#include "CharacterDie.h"
#include "GameManager.h"
#include "CRigidBody.h"
#include "Entity.h"
#include "ScriptManager.h"
#include "LuaManager.h"

const std::string eden_ec::CharacterDie::_id = "CHARACTER_DIE";

eden_ec::CharacterDie::CharacterDie()
{

	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "CharacterDie", &eden_ec::CharacterDie::RunOver, "RunOver", this);

	scriptM->SetGlobal(this, "CharacterDie");

	scriptM = nullptr;
}

void eden_ec::CharacterDie::Init(eden_script::ComponentArguments* args)
{

}

void eden_ec::CharacterDie::Start()
{
}

void eden_ec::CharacterDie::Update(float t)
{
	
}

void eden_ec::CharacterDie::RunOver()
{
	//Se obtiene la entidad contra la que se ha chocado
	Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()
		->GetLuaManager()->GetLuaState(), "other");

	//Si dicha entidad tiene el componente enemyMovement significa que es un coche
	if(otherEnt->HasComponent("ENEMY_MOVEMENT")) eden_ec::GameManager::Instance()->GameOver();
}
