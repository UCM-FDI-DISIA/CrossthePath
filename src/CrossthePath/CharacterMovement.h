#define _CRTDBG_MAP_ALLOC
#ifndef CHARACTER_MOVEMENT_H
#define CHARACTER_MOVEMENT_H

#include "Component.h"
#include "Quaternion.h"
#include <deque>

namespace eden_input {
	class InputManager;
}

/// @brief Enumerado que contiene las animaciones basicas del jugador
enum MovementAnimations {
	IDLE = 0, MOVING = 1, DIE = 2, WIN = 3
};

/// @brief Enumerado que contiene las posibles direcciones de movimiento del jugador
enum MovementDir {
	LEFT = 0, RIGHT = 1, UP = 2, DOWN = 3
};

namespace eden_ec {
	class CTransform;
	class CAnimator;
	class CAudioEmitter;
}

namespace ctp {

	class CharacterMovement : public eden_ec::Component {
	public:
		CharacterMovement() = default;
		~CharacterMovement() = default;

		static std::string GetID() { return _id; }

		/// @brief Coge la instancia del InputManager
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {};

		/// @brief Hace referencia al Transform, Animator y AudioEmmiter. Coge la rotacinon
		/// inicial del jugador y le pone la animacion de Idle como inicial
		void Start() override;

		/// @brief Se encarga de la recogida de input y de llamar a los metodos correspondientes
		/// para animar y mover al jugador
		/// @param t deltaTime
		void Update(float t) override;

		/// @brief Mueve y rota al jugador en la direccion de la ultima tecla pulsada, registrada en el deque _inputVector
		/// @param dt deltaTime
		void MoveCharacter(float dt);

		/// @brief Checkea si el jugador ya esta reproduciendo la animacion adecuada y si no la activa
		void PlayAnimation();

		/// @brief Avisa al GameManager de que el juego a comenzado y que el player se ha movido por primera vez
		void StartMoving();

		/// @brief Borra del deque _inputVector la tecla que se ha dejado de presionar para no ir en esa direccion
		/// @param dir Direccion asociada a la tecla que ha dejado de presionarse
		void RemoveInput(MovementDir dir);

	protected:
		const static std::string _id;
	private:

		/// @brief Referencias a componentes necesarios
		eden_ec::CAudioEmitter* _audioEmitter;
		eden_input::InputManager* _inputManager;
		eden_ec::CTransform* _transform;
		eden_ec::CAnimator* _animator;

		/// @brief Rotacion inicial del jugador, rotacion de incio de partida
		eden_utils::Quaternion _initialRotation;

		/// @brief Booleano que avisa si el jugador se ha movido por primera vez
		bool _firstMove = true;

		/// @brief  Animacion actual del jugador
		MovementAnimations _currentAction = MovementAnimations::IDLE;

		/// @brief Deque con las teclas presionadas que indican que movimiento hacer (la ultima tecla pulsada)
		std::deque<MovementDir> _inputVector;
	};
}
#endif //CHARACTER_MOVEMENT_H