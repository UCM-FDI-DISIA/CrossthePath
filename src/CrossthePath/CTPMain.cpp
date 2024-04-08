#include "CTPMain.h"
#include "SceneManager.h"

std::string saludo() {
	return "adios";
}

void loadScene() {
	eden::SceneManager* scnManager = eden::SceneManager::Instance();
	scnManager->PushScene("Menu");
}