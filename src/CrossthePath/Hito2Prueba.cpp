#include "Hito2Prueba.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "CAudioEmitter.h"
#include <InputManager.h>
#include "Entity.h"
#include "Transform.h"
#include "CAnimator.h"
#include "SceneManager.h"
#include "Sound.h"
#include <string>
#include <ScriptManager.h>
#include <LuaManager.h>

#include "GameManager.h"

const std::string eden_ec::Hito2Prueba::_id = "PRUEBA2";
void eden_ec::Hito2Prueba::Start() {
	_audioEmitter = _ent->GetComponent<CAudioEmitter>();
	_audioEmitter->Play();
	_audioEmitter->SetLoop(true);
	transform = _ent->GetComponent<CTransform>();
	animator = _ent->GetComponent<CAnimator>();
	animator->PlayAnim("Idle");

	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Game", &eden_ec::Hito2Prueba::Pause, "Pause", this);
	scriptM->SetGlobal(this, "Game");
	scriptM = nullptr;
}

void eden_ec::Hito2Prueba::Init(eden_script::ComponentArguments* args) {
	inputManager = eden_input::InputManager::getInstance();
	eden_ec::GameManager::Instance()->SetPlayer(_ent);
}

void eden_ec::Hito2Prueba::Update(float dt) {

	if (inputManager->IsKeyHeld('a')) {
		transform->Translate(eden_utils::Vector3(0, -0.01, 0));
		if (!keyPressed) {
			animator->PlayAnim("Walk");
			transform->SetRotation(*initialRotation);
			transform->Roll(90);
		}
		idle = false;
		jump = false;
		keyPressed = true;

	}
	else if (inputManager->IsKeyHeld('s')) {
		transform->Translate(eden_utils::Vector3(0.01, 0, 0));
		if (!keyPressed) {
			animator->PlayAnim("Walk");
			transform->SetRotation(*initialRotation);
		}
		idle = false;
		jump = false;
		keyPressed = true;

	}
	else if (inputManager->IsKeyHeld('w')) {
		transform->Translate(eden_utils::Vector3(-0.01, 0, 0));
		if (!keyPressed) {
			animator->PlayAnim("Walk");
			transform->SetRotation(*initialRotation);
		}
		idle = false;
		jump = false;
		keyPressed = true;

	}
	else if (inputManager->IsKeyHeld('d')) {
		transform->Translate(eden_utils::Vector3(0, 0.01, 0));

		if (!keyPressed) {
			animator->PlayAnim("Walk");
			transform->SetRotation(*initialRotation);
			transform->Roll(-90);
		}
		idle = false;
		jump = false;
		keyPressed = true;
	}

	else {
		if (!idle && !jump) {
			animator->PlayAnim("Idle");
			idle = true;
		}
		if (jump && animator->GetCurrentAnim() == "Idle") {
			jump = false;
			idle = true;
			transform->Translate(eden_utils::Vector3(0, -20, 0));
		}
		keyPressed = false;
	}
}

void eden_ec::Hito2Prueba::Jump() {
	transform->Translate(eden_utils::Vector3(0, 20, 0));

	if (!jump) {
		animator->PlayAnim("JumpStart");
		jump = true;
		idle = false;
	}
}

void eden_ec::Hito2Prueba::Pause()
{
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("MenuPausa");
}