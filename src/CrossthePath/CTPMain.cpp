#include "CTPMain.h"
#include "ScriptManager.cpp"

std::string saludo() {
	return "adios";
}

void loadScene() {
	eden_script::ScriptManager* scriptMngr = eden_script::ScriptManager::Instance();
	//scriptMngr->ReadScene("Menu",)
	/*eden::SceneManager* scnManager = eden::SceneManager::Instance();
	scnManager->PushScene("Menu");*/
}