#include "InstanciateEnemies.h"
#include "Entity.h"
#include "Transform.h"
#include "SceneManager.h"

const std::string eden_ec::InstanciateEnemies::_id = "INSTANCIATE_ENEMIES";

namespace eden_ec {

	void InstanciateEnemies::Init(eden_script::ComponentArguments* args) {
		_prefabName = args->GetValueToString("PrefabName");
		_spawnRate = args->GetValueToFloat("SpawnRate");
	}

	void InstanciateEnemies::Awake() {
		_scnMng = eden::SceneManager::getInstance();
	}

	void InstanciateEnemies::Start() {
		_pos = _ent->GetComponent<eden_ec::CTransform>()->GetPosition();
	}

	void InstanciateEnemies::Update(float t) {
		_timer += t;
		if (_timer >= _spawnRate) {
			InstanciateEnemy();
			_timer = 0;
		}
	}


	void InstanciateEnemies::SetInitRotation()
	{
		/*if (_isLeft) {
			_transform->Yaw(-90);
			_transform->Pitch(180);
			_transform->Roll(-90);
		}
		else {
			_transform->Yaw(-90);
			_transform->Pitch(180);
			_transform->Roll(-90);
		}*/
	}


	void InstanciateEnemies::InstanciateEnemy() {
		auto coche = _scnMng->InstantiateBlueprint(_prefabName, _pos);
		auto _transform = coche->GetComponent<CTransform>();

		if (_isLeft) {
			_transform->Yaw(-90);
			_transform->Pitch(180);
			_transform->Roll(-90);
		}
		else {
			_transform->Yaw(-90);
			_transform->Pitch(180);
			_transform->Roll(-90);
		}
	}
}