#include "CameraMovement.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "Transform.h"
#include "GameManager.h"
#include "CAudioEmitter.h"
#include "CCamera.h"
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
	if (ctp::GameManager::Instance()->GetLevel() == 1) eden::SceneManager::getInstance()->FindEntity("Camera_0")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(0, 0, 0, 0);
	else eden::SceneManager::getInstance()->FindEntity("Camera_0")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(0.3176, 0.8196, 0.9647, 1);
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

	//Actualizamos la posición
	_transform->SetPosition(eden_utils::Vector3(_transform->GetPosition().GetX(), _transform->GetPosition().GetY(), toFinalPos.GetZ()));
}

