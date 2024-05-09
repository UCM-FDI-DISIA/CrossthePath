#ifndef CAMERA_MOVEMENT_H
#define CAMERA_MOVEMENT_H

#include "Component.h"
namespace eden_utils {
	class Quaternion;
}
namespace eden_ec {
	class CTransform;
	class CAudioEmitter;
}

namespace ctp {

	/// @brief Clase encargada del movimiento de la camara siguiendo al jugador
	class CameraMovement : public eden_ec::Component {
	public:
		/// @brief Constructora base
		CameraMovement() = default;
		/// @brief Destructora base
		~CameraMovement() override;
		/// @brief Devuelve el ID de la clase
		static std::string GetID() { return _id; }
		/// @brief Init
		void Init(eden_script::ComponentArguments* args) {};
		/// @brief Awake
		void Awake() override {};
		/// @brief Start
		void Start() override;
		/// @brief Update
		void Update(float t) override;
		/// @brief Coloca la camara en la posicion del player
		void GoToPlayer();

	protected:
		const static std::string _id;
	private:
		/// @brief Referencia al Transform de la camara
		eden_ec::CTransform* _transform = nullptr;
		/// @brief Referencia al Transform del player
		eden_ec::CTransform* _playerTransform = nullptr;
		/// @brief Referencia al Quaternion de la camara
		eden_utils::Quaternion* _initialRotation = nullptr;

		/// @brief velocidad de la cámara
		float _speed = 8;
		/// @brief offset de la cámara
		float _offset = 3;
	};
}
#endif //CAMERA_MOVEMENT_H
