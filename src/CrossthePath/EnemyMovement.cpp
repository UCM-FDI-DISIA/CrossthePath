#include "EnemyMovement.h"
#include "Entity.h"
#include "ComponentArguments.h"
#include "Transform.h"
#include "CRigidBody.h"
#include <CParticleEmitter.h>

const std::string ctp::EnemyMovement::_id = "ENEMY_MOVEMENT";

void ctp::EnemyMovement::Init(eden_script::ComponentArguments* args)
{
	_vel = args->GetValueToInt("Velocity");

}

void ctp::EnemyMovement::Start()
{
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_particle = _ent->GetComponent<eden_ec::CParticleEmitter>();
}

void ctp::EnemyMovement::Update(float t)
{
	_transform->Translate((_movDir) * t, true);
}

void ctp::EnemyMovement::SetWay(bool way)
{
	_way = way;
}

void ctp::EnemyMovement::SetMov()
{
	//Eje X positivo hacia la izquierda
	if (_way) _movDir = { 1,0,0 };
	//Eje X negativo hacia la derecha
	else _movDir = { -1,0,0 };

	_movDir *= (float)_vel;
}
