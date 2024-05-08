#include "CameraMovement.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "Transform.h"
#include "GameManager.h"
#include "CAudioEmitter.h"
#include <SceneManager.h>

const std::string ctp::CameraMovement::_id = "PLAYERCAMERA";

ctp::CameraMovement::~CameraMovement()
{
	delete _initialRotation;
}

void ctp::CameraMovement::Start() {
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_playerTransform = eden::SceneManager::getInstance()->FindEntity("Player_0")->GetComponent<eden_ec::CTransform>();
	_initialRotation = new eden_utils::Quaternion(_transform->GetRotation());
	//_audioEmitter = _ent->GetComponent<CAudioEmitter>();
	//_audioEmitter->Play();
}

void ctp::CameraMovement::Update(float dt) 
{
	//Calculamos la direccion en la que se movera la camara
	eden_utils::Vector3 dir =
		eden_utils::Vector3(_playerTransform->GetPosition().GetX(), _playerTransform->GetPosition().GetY(), _playerTransform->GetPosition().GetZ() + _offset) - _transform->GetPosition();
	dir.Normalize();

	//Seteamos el vector de movimiento
	eden_utils::Vector3 toFinalPos = _transform->GetPosition() + (dir * dt * _speed);

	//Actualizamos la posici�n
	_transform->SetPosition(eden_utils::Vector3(_transform->GetPosition().GetX(), _transform->GetPosition().GetY(), toFinalPos.GetZ()));
}

