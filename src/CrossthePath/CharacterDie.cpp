#include "CharacterDie.h"
#include "GameManager.h"
#include "Entity.h"
#include "ScriptManager.h"
#include "LuaManager.h"
#include "SendInfoNet.h"

const std::string ctp::CharacterDie::_id = "CHARACTER_DIE";

ctp::CharacterDie::CharacterDie()
{

	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "CharacterDie", &ctp::CharacterDie::RunOver, "RunOver", this);

	scriptM->SetGlobal(this, "CharacterDie");

	scriptM = nullptr;
}

void ctp::CharacterDie::RunOver()
{
	//Se obtiene la entidad contra la que se ha chocado
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()
		->GetLuaManager()->GetLuaState(), "other");

	//Si dicha entidad tiene el componente enemyMovement significa que es un coche
	if (otherEnt->HasComponent("ENEMY_MOVEMENT")) {
		ctp::SendInfoNet* sendInfo = _ent->GetComponent<ctp::SendInfoNet>();
		sendInfo->Restart();
	}
}
