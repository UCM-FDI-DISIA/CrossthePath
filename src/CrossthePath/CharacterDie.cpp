#include "CharacterDie.h"
#include "GameManager.h"
#include "CRigidBody.h"
#include "Entity.h"
#include "ScriptManager.h"
#include "LuaManager.h"

const std::string eden_ec::CharacterDie::_id = "CHARACTER_DIE";

eden_ec::CharacterDie::CharacterDie()
{
}

void eden_ec::CharacterDie::Init(eden_script::ComponentArguments* args)
{

}

void eden_ec::CharacterDie::Start()
{
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();

	scriptM->Regist(*this, "CharacterDie", &eden_ec::CharacterDie::RunOver, "RunOver", this);

	scriptM->SetGlobal(this, "CharacterDie");
	scriptM = nullptr;

	_rb = _ent->GetComponent<CRigidBody>();
}

void eden_ec::CharacterDie::Update(float t)
{
	
}

bool eden_ec::CharacterDie::RunOver()
{
	eden_ec::GameManager::Instance()->GameOver();
	return true;
}
