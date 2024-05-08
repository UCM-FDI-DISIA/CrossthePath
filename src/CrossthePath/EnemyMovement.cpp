#include "EnemyMovement.h"
#include "Entity.h"
#include "ComponentArguments.h"
#include "Transform.h"
#include "CRigidBody.h"
#include <CParticleEmitter.h>

const std::string eden_ec::EnemyMovement::_id = "ENEMY_MOVEMENT";

void eden_ec::EnemyMovement::Init(eden_script::ComponentArguments* args)
{
	_vel = args->GetValueToInt("Velocity");

}

void eden_ec::EnemyMovement::Start()
{
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_particle = _ent->GetComponent<eden_ec::CParticleEmitter>();
}

void eden_ec::EnemyMovement::Update(float t)
{
	_transform->Translate((_movDir).Normalized() * t, true);
}

void eden_ec::EnemyMovement::SetWay(bool way)
{
	_way = way;
}

void eden_ec::EnemyMovement::SetMov()
{
	//Eje X positivo hacia la izquierda
	if (_way) _movDir = { 1,0,0 };
	//Eje X negativo hacia la derecha
	else _movDir = { -1,0,0 };

	_movDir *= _vel;
}
