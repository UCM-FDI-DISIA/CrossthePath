#include "CTPMain.h"
#include "SceneManager.h"

std::string saludo() {
	return "adios";
}

void loadScene(eden::SceneManager* scnManager) {
	scnManager->PushScene("Menu");
}