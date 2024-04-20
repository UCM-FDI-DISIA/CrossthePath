#define _CRTDBG_MAP_ALLOC
#ifndef CAMERA_MOVEMENT_H
#define CAMERA_MOVEMENT_H

#include "Component.h"
namespace eden_utils {
	class Quaternion;
}
namespace eden_ec {
	class CTransform;
	/// @brief Clase encargada del movimiento de la cámara siguiendo al jugador
	class CameraMovement : public Component {
	public:
		CameraMovement() = default;
		~CameraMovement() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {};

		void Start() override;

		void Update(float t) override;

	protected:
		const static std::string _id;
	private:
		eden_ec::CTransform* _transform;
		eden_ec::CTransform* _playerTransform;
		eden_utils::Quaternion* _initialRotation;

		/// @brief velocidad de la cámara
		float _speed = 5;
		/// @brief offset de la cámara
		float _offset = 1.5f;
	};
}
#endif //CAMERA_MOVEMENT_H
