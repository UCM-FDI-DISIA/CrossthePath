#ifndef CROSS_THE_PATH_MAIN_H_

#include <string>

namespace eden {
	class SceneManager;
}

namespace eden_ec {
	class ComponentFactory;
}

extern "C" __declspec(dllexport) void RegisterComponents(eden_ec::ComponentFactory* factory);
extern "C" __declspec(dllexport) void LoadScene(eden::SceneManager* scnManager);

#endif // !CROSS_THE_PATH_MAIN_H_