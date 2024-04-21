#ifndef CROSS_THE_PATH_C_INSTANCIATE_ENEMIES_H
#define CROSS_THE_PATH_C_INSTANCIATE_ENEMIES_H

#include "Component.h"

namespace eden {
	class SceneManager;
}

namespace eden_ec {
	class CTransform;
	class InstanciateEnemies : public Component
	{
	protected:
		void Awake() override {};
		void Start() override {};
	};
}

#endif // CROSS_THE_PATH_C_INSTANCIATE_ENEMIES_H