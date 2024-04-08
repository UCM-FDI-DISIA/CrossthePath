#ifndef CROSS_THE_PATH_MAIN_H_

#include <string>

namespace eden {
	class SceneManager;
}
extern "C" __declspec(dllexport) std::string saludo();

extern "C" __declspec(dllexport) void loadScene();
#endif // !CROSS_THE_PATH_MAIN_H_