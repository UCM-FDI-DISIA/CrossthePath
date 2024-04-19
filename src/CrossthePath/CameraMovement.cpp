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
	_offset = 2;
}

void eden_ec::CameraMovement::Init(eden_script::ComponentArguments* args) {
}

void eden_ec::CameraMovement::Update(float dt) {

	_transform->SetPosition(eden_utils::Vector3(_playerTransform->GetPosition().GetX()+_offset, _transform->GetPosition().GetY(), _transform->GetPosition().GetZ()));
	
}
