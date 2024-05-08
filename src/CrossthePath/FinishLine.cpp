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
	_isPlayer = args->GetValueToBool("IsPlayer");
}
void eden_ec::FinishLine::Start() {

	// PRUEBA TRIGGER/COLISION
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::Instance()->GetLuaManager();
	if (_isPlayer)
	{
		scriptM->Regist(*this, "FinishLine", &eden_ec::FinishLine::DestroyEntities, "PlayerWin", this);
	}
	else
	{
		scriptM->Regist(*this, "FinishLine", &eden_ec::FinishLine::DestroyEntities, "DestroyEntities", this);

	}
	scriptM->SetGlobal(this, "FinishLine");
	scriptM = nullptr;
	_transform = _ent->GetComponent<CTransform>();
	if (_isPlayer)
	{
		_playerTransform = eden::SceneManager::getInstance()->FindEntity("Player_0")->GetComponent<CTransform>();
	}
	else
	{
		//_enemies = eden_ec::GameManager::Instance()->GetEnemies();
	}

}

void eden_ec::FinishLine::Update(float dt)
{
	//if (!_win)
	//{
	//	if (_isPlayer && _playerTransform->GetPosition().GetX() < _transform->GetPosition().GetX()) {
	//		_win = true;
	//		eden_ec::GameManager::Instance()->PlayerWin();
	//	}
	//	else if (!_isPlayer)
	//	{
	//		for (auto it = _enemies->begin(); it != _enemies->end();)
	//		{
	//			//float tmp = (*it).second->GetComponent<CRigidBody>()->OnCollisionEnter();
	//			//if(tmp  )
	//		}
	//	}
	//}
}

void eden_ec::FinishLine::DestroyEntities()
{
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::Instance()->GetLuaManager();
	Entity* enemyCol = luabridge::getGlobal(scriptM->GetLuaState(), "other");
	eden_ec::GameManager::Instance()->DestroyEnemy(enemyCol->GetEntityID());
}

void eden_ec::FinishLine::PlayerWin()
{
	eden_ec::GameManager::Instance()->PlayerWin();
}

