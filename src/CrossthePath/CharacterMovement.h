#define _CRTDBG_MAP_ALLOC
#ifndef CHARACTER_MOVEMENT_H
#define CHARACTER_MOVEMENT_H

#include "Component.h"
#include "Quaternion.h"
namespace eden_input {
	class InputManager;
}

enum MovementAnimations {
	IDLE = 0, MOVING = 1, DIE = 2, WIN = 3
};


enum MovementDir {
	LEFT = 0, RIGHT = 1, UP = 2, DOWN = 3, STOP = 4
};

namespace eden_ec {
	class CTransform;
	class CAnimator;
	class CAudioEmitter;
	class CharacterMovement : public Component {
	public:
		CharacterMovement() = default;
		~CharacterMovement() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) override;

		void Start() override;

		void Update(float t) override;

		void MoveCharacter(eden_utils::Vector3 dir, float dt, float angle = 0);

		void PlayAnimation();
	protected:
		const static std::string _id;
	private:
		eden_ec::CAudioEmitter* _audioEmitter;
		eden_input::InputManager* _inputManager;
		eden_ec::CTransform* _transform;
		eden_ec::CAnimator* _animator;
		eden_utils::Quaternion _initialRotation;
		
		bool keyReleased = true;

		MovementAnimations currentAction = MovementAnimations::IDLE;
		MovementDir currentDirMovement = MovementDir::STOP;
	};
}
#endif //CHARACTER_MOVEMENT_H
