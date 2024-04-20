#include "CameraMovement.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "Transform.h"
#include "GameManager.h"

const std::string eden_ec::CameraMovement::_id = "PLAYERCAMERA";
void eden_ec::CameraMovement::Start() {
	_transform = _ent->GetComponent<CTransform>();
	_playerTransform = eden_ec::GameManager::Instance()->GetPlayer()->GetComponent<CTransform>();
	_initialRotation = new eden_utils::Quaternion(_transform->GetRotation());
}

void eden_ec::CameraMovement::Update(float dt) 
{
	//Calculamos la dirección en la que se moverá la cámara
	eden_utils::Vector3 dir =
		eden_utils::Vector3(_playerTransform->GetPosition().GetX()+_offset, _playerTransform->GetPosition().GetY(), _playerTransform->GetPosition().GetZ()) - _transform->GetPosition();
	dir.Normalize();

	//Seteamos el vector de movimiento
	eden_utils::Vector3 toFinalPos = _transform->GetPosition() + (dir * dt * _speed);

	//Actualizamos la posición
	_transform->SetPosition(eden_utils::Vector3(toFinalPos.GetX(), _transform->GetPosition().GetY(), _transform->GetPosition().GetZ()));
}

