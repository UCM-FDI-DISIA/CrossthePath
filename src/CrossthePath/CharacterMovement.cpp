#include "CharacterMovement.h"
#define _CRTDBG_MAP_ALLOC
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

#include <string>
#include <math.h> 

const std::string eden_ec::CharacterMovement::_id = "CHARACTER_MOVEMENT";
void eden_ec::CharacterMovement::Start() {
	_audioEmitter = _ent->GetComponent<CAudioEmitter>();

	_transform = _ent->GetComponent<CTransform>();
	_animator = _ent->GetComponent<CAnimator>();
	_animator->PlayAnim("Idle");

	_initialRotation = _transform->GetRotation();
}

void eden_ec::CharacterMovement::Init(eden_script::ComponentArguments* args) {
	_inputManager = eden_input::InputManager::getInstance();
	eden_ec::GameManager::Instance()->SetPlayer(_ent);
}
//
//void eden_ec::CharacterMovement::MoveCharacter(eden_utils::Vector3 dir, float dt, float angle) {
//	_transform->Translate(dir* dt);
//	if (!keyPressed) {
//		_animator->PlayAnim("Walk");
//		_transform->SetRotation(_initialRotation);
//		_transform->Roll(angle);
//	}
//	idle = false;
//	keyPressed = true;
//}
//void eden_ec::CharacterMovement::Update(float dt) {
//	if (_inputManager->IsKeyHeld('a')) {
//		MoveCharacter(eden_utils::Vector3(0, -0.01, 0), dt, 90);
//	}
//	if (_inputManager->IsKeyHeld('s')) {
//		MoveCharacter(eden_utils::Vector3(0.01, 0, 0), dt, 180);
//	}
//	if (_inputManager->IsKeyHeld('w')) {
//		MoveCharacter(eden_utils::Vector3(-0.01, 0, 0), dt);
//	}
//	if (_inputManager->IsKeyHeld('d')) {
//		MoveCharacter(eden_utils::Vector3(0, 0.01, 0), dt, -90);
//	}
//	
//	if(!idle) _animator->PlayAnim("Idle");
//	idle = true;
//	if (keyPressed) keyPressed = false;
//}

void eden_ec::CharacterMovement::PlayAnimation() {
	switch (currentAction){
		case MOVING: 
			_animator->PlayAnim("Walk"); 
			break;
		case DIE: 
			_animator->PlayAnim("Die");
			break;
		case WIN:
			_animator->PlayAnim("Win");
			break;
		default: 
			_animator->PlayAnim("Idle");
		
	}
}

void eden_ec::CharacterMovement::MoveCharacter(eden_utils::Vector3 dir, float dt, float angle) {
	switch (currentAction) {
	case MOVING:
		_animator->PlayAnim("Walk");
		break;
	case DIE:
		_animator->PlayAnim("Die");
		break;
	case WIN:
		_animator->PlayAnim("Win");
		break;
	default:
		_animator->PlayAnim("Idle");

	}

	_transform->Translate(dir.Normalized() * dt);
	_transform->SetRotation(_initialRotation);
	_transform->Roll(angle);
	
	currentAction = MOVING;
	keyReleased = false;
}

void eden_ec::CharacterMovement::Update(float dt) {
	PlayAnimation();
	if (_inputManager->IsKeyHeld('a')) {
		currentDirMovement = LEFT;
		MoveCharacter(eden_utils::Vector3(0, -0.01, 0), dt, 90);
	}

	if (_inputManager->IsKeyHeld('s')) {
		MoveCharacter(eden_utils::Vector3(0.01, 0, 0), dt, 180);
	}

	if (_inputManager->IsKeyHeld('w')) {
		MoveCharacter(eden_utils::Vector3(-0.01, 0, 0), dt);
	}

	if (_inputManager->IsKeyHeld('d')) {
		MoveCharacter(eden_utils::Vector3(0, 0.01, 0), dt, -90);
	}
	currentAction = IDLE;
	_animator->OnAnimEnd();
	keyReleased = true;
}