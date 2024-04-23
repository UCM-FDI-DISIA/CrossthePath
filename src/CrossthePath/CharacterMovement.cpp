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
	eden_ec::GameManager::Instance()->SetPlayer(_ent);
}

void eden_ec::CharacterMovement::Init(eden_script::ComponentArguments* args) {
	_inputManager = eden_input::InputManager::getInstance();
}

void eden_ec::CharacterMovement::PlayAnimation() {

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

	}
}

void eden_ec::CharacterMovement::StartMoving()
{
	eden_ec::GameManager::Instance()->Begin();
}

void eden_ec::CharacterMovement::MoveCharacter(float dt) {

	if (_firstMove) {
		_firstMove = false;
		StartMoving();
	}

	_transform->SetRotation(_initialRotation);
	_currentAction = MOVING;

	switch (_currentDirMovement) {
	case DOWN:
	{
		_transform->Translate(eden_utils::Vector3(0.01, 0, 0).Normalized() * dt);
		_transform->Roll(180);
	}
	break;
	case LEFT:
	{
		_transform->Translate(eden_utils::Vector3(0, -0.01, 0).Normalized() * dt);
		_transform->Roll(90);
	}
	break;
	case RIGHT:
	{
		_transform->Translate(eden_utils::Vector3(0, 0.01, 0).Normalized() * dt);
		_transform->Roll(-90);
	}
	break;
	case UP:
	{
		_transform->Translate(eden_utils::Vector3(-0.01, 0, 0).Normalized() * dt);
	}
	}

}


void eden_ec::CharacterMovement::Update(float dt) {
	PlayAnimation();
	keyReleased = true;

	if (_inputManager->IsKeyHeld('a')) {
		_currentDirMovement = LEFT;
		keyReleased = false;

	}

	if (_inputManager->IsKeyHeld('s')) {
		_currentDirMovement = DOWN;
		keyReleased = false;

	}

	if (_inputManager->IsKeyHeld('w')) {
		_currentDirMovement = UP;
		keyReleased = false;

	}

	if (_inputManager->IsKeyHeld('d')) {
		_currentDirMovement = RIGHT;
		keyReleased = false;

	}


	if (keyReleased) {
		_currentAction = IDLE;
	}
	else MoveCharacter(dt);


}