#include "InstanciateEnemies.h"
#include "Entity.h"
#include "Transform.h"
#include "SceneManager.h"
#include "EnemyMovement.h"
#include "CAudioEmitter.h"
#include "GameManager.h"

const std::string ctp::InstanciateEnemies::_id = "INSTANCIATE_ENEMIES";

namespace ctp {

	void InstanciateEnemies::Init(eden_script::ComponentArguments* args) {
		_prefabName = args->GetValueToStringVector("PrefabName");
		_spawnRate = args->GetValueToFloat("SpawnRate");
		_isLeft = args->GetValueToBool("IsLeft");
		SetActive(args->GetValueToBool("Active"));
	}

	void InstanciateEnemies::Awake() {
		_scnMng = eden::SceneManager::getInstance();
	
	}

	void InstanciateEnemies::Start() {
		_pos = _ent->GetComponent<eden_ec::CTransform>()->GetPosition();
		ctp::GameManager::Instance()->AddInstanciator(_ent);
		_timer = _spawnRate;
	}

	void InstanciateEnemies::Update(float t) {
		_timer += t;
		if (_timer >= _spawnRate) {
			InstanciateEnemy();
			_timer = 0;
		}
	}

	void InstanciateEnemies::InstanciateEnemy() {
		
		int enemy = std::rand() % _prefabName.size();
		eden_ec::Entity* coche = _scnMng->InstantiateBlueprint(_prefabName[enemy], _pos);
		eden_ec::CTransform* _transform = coche->GetComponent<eden_ec::CTransform>();

		if (_isLeft) {
			_transform->Yaw(-90);
			_transform->Pitch(180);
			_transform->Roll(-90);
		}
		else {
			_transform->Yaw(90);
			_transform->Pitch(-180);
			_transform->Roll(90);
		}
		coche->GetComponent<EnemyMovement>()->SetWay(_isLeft);
		coche->GetComponent<EnemyMovement>()->SetMov();
		_motorSound = coche->GetComponent<eden_ec::CAudioEmitter>();
		ctp::GameManager::Instance()->AddEnemy(coche);
		_motorSound->SetVolume((float)0.8);
		_motorSound->Play();
		_motorSound->SetLoop(true);
	}
}