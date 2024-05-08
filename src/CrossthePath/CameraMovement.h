#define _CRTDBG_MAP_ALLOC
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
		CameraMovement() = default;
		~CameraMovement() override;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {};

		void Awake() override {};

		void Start() override;

		void Update(float t) override;

	protected:
		const static std::string _id;
	private:
		eden_ec::CTransform* _transform;
		eden_ec::CTransform* _playerTransform;
		eden_utils::Quaternion* _initialRotation;
		eden_ec::CAudioEmitter* _audioEmitter;


		/// @brief velocidad de la cámara
		float _speed = 8;
		/// @brief offset de la cámara
		float _offset = 3;
	};
}
#endif //CAMERA_MOVEMENT_H
