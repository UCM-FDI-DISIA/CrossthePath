#include "CharacterMovement.h"
#include "Entity.h"
#include "CAudioEmitter.h"
#include "InputManager.h"
#include "Entity.h"
#include "Transform.h"
#include "CAnimator.h"
#include "SceneManager.h"
#include "Sound.h"
#include "ScriptManager.h"
#include "LuaManager.h"
#include "Vector3.h"
#include "GameManager.h"

#include "CRigidBody.h"

#include <string>
#include <math.h> 

const std::string ctp::CharacterMovement::_id = "CHARACTER_MOVEMENT";
void ctp::CharacterMovement::Start() {
	_audioEmitter = _ent->GetComponent<eden_ec::CAudioEmitter>();
	_ent->GetComponent<eden_ec::CRigidBody>()->SetTemporalDeactivation(true);
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_animator = _ent->GetComponent<eden_ec::CAnimator>();
	_animator->PlayAnim("Idle");

	_initialRotation = _transform->GetRotation();
}

void ctp::CharacterMovement::Init(eden_script::ComponentArguments* args) {
	_inputManager = eden_input::InputManager::getInstance();
	_speed = args->GetValueToFloat("Speed");
}

void ctp::CharacterMovement::PlayAnimation() {

	switch (_currentAction) {
	case MOVING:
		if (!_animator->IsPlaying("Walk")) _animator->PlayAnim("Walk");
		break;
	case DIE:
		if (!_animator->IsPlaying("Die")) _animator->PlayAnim("Die");
		break;
	case WIN:
		if (!_animator->IsPlaying("Win")) _animator->PlayAnim("Win");
		break;
	default:
		if (!_animator->IsPlaying("Idle")) _animator->PlayAnim("Idle");
		break;
	}
}

void ctp::CharacterMovement::StartMoving()
{
	ctp::GameManager::Instance()->Begin();
}

void ctp::CharacterMovement::MoveCharacter(float dt) {

	if (_firstMove) {
		_firstMove = false;
		StartMoving();
	}

	//Hace una rotacion inicial para ponerle mirando hacia delante y luego se hara una 
	//segunda roatcion para mirar a la direccion correcta
	_transform->SetRotation(_initialRotation);
	_currentAction = MOVING;
	switch (_inputVector.back()) {
	case DOWN:
	{
		_transform->Translate(eden_utils::Vector3(0.0f, 0.0f, -0.1f).Normalized()* _speed * dt);
		_transform->Yaw(180);
	}
	break;
	case LEFT:
	{
		_transform->Translate(eden_utils::Vector3(0.1f,0.0f, 0.0f).Normalized()* _speed * dt);
		_transform->Yaw(90);
	}
	break;
	case RIGHT:
	{
		_transform->Translate(eden_utils::Vector3(-0.1f,0.0f, 0.0f).Normalized()* _speed * dt);
		_transform->Yaw(-90);
	}
	break;
	case UP:
		_transform->Translate(eden_utils::Vector3(0.0f, 0.0f, 0.1f).Normalized()* _speed * dt);
	}

}

void ctp::CharacterMovement::RemoveInput(MovementDir dir) {
	for (auto it = _inputVector.begin(); it != _inputVector.end();) {
		if (*it == dir) it = _inputVector.erase(it);
		else ++it;
	}
}

void ctp::CharacterMovement::Update(float dt) {
	PlayAnimation();

	if (_inputManager->IsKeyDown('a')) _inputVector.push_back(LEFT);
	else if(_inputManager->IsKeyUp('a')) RemoveInput(LEFT);

	if (_inputManager->IsKeyDown('s')) _inputVector.push_back(DOWN);
	else if (_inputManager->IsKeyUp('s')) RemoveInput(DOWN);

	if (_inputManager->IsKeyDown('w')) _inputVector.push_back(UP);
	else if (_inputManager->IsKeyUp('w')) RemoveInput(UP);

	if (_inputManager->IsKeyDown('d')) _inputVector.push_back(RIGHT);
	else if (_inputManager->IsKeyUp('d')) RemoveInput(RIGHT);

	if (_inputVector.size() == 0) {
		_currentAction = IDLE;
		if (!_audioEmitter->IsPaused())
		{
			_audioEmitter->Pause();
			_stepSound = false;
		}
	}
	else {
		MoveCharacter(dt);
		if (!_stepSound)
		{
			_audioEmitter->Play();
			_audioEmitter->SetLoop(true);
			_stepSound = true;
		}
	}


}