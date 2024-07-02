#include "CameraMovement.h"
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
	_playerTransform = eden::SceneManager::getInstance()->FindEntity("Player1_0")->GetComponent<eden_ec::CTransform>();
	_initialRotation = new eden_utils::Quaternion(_transform->GetRotation());
	if (ctp::GameManager::Instance()->GetLevel() == 1) eden::SceneManager::getInstance()->FindEntity("Camera_0")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(0, 0, 0, 0);
	else eden::SceneManager::getInstance()->FindEntity("Camera_0")->GetComponent<eden_ec::CCamera>()->SetBackgroundColor(0.3176f, 0.8196f, 0.9647f, 1.0f);
	eden_ec::CAudioEmitter* _audioEmitter = _ent->GetComponent<eden_ec::CAudioEmitter>();
	_audioEmitter->Play();
	_audioEmitter->SetLoop(true);
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

void ctp::CameraMovement::GoToPlayer()
{
	if (_playerTransform->GetPosition().GetZ() - _transform->GetPosition().GetZ() > 5) {

		eden_utils::Vector3 v =	eden_utils::Vector3(_transform->GetPosition().GetX(),
			_transform->GetPosition().GetY(),
			_playerTransform->GetPosition().GetZ());

		_transform->SetPosition(v);
	}
	
}

