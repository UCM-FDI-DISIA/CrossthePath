#define _CRTDBG_MAP_ALLOC
#ifndef CAMERA_MOVEMENT_H
#define CAMERA_MOVEMENT_H

#include "Component.h"
namespace eden_utils {
	class Quaternion;
}
namespace eden_ec {
	class CTransform;
	class CameraMovement : public Component {
	public:
		CameraMovement() = default;
		~CameraMovement() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) override;

		void Start() override;

		void Update(float t) override;

	protected:
		const static std::string _id;
	private:
		eden_ec::CTransform* _transform;
		eden_ec::CTransform* _playerTransform;
		eden_utils::Quaternion* _initialRotation;

		float _offset;
	};
}
#endif //CAMERA_MOVEMENT_H
