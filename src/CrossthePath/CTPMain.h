#ifndef CROSS_THE_PATH_MAIN_H_

#include <string>

namespace eden {
	class SceneManager;
}

extern "C" __declspec(dllexport) void RegisterComponents();
extern "C" __declspec(dllexport) void LoadScene(eden::SceneManager* scnManager);

#endif // !CROSS_THE_PATH_MAIN_H_