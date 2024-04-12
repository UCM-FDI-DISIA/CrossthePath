#include "CTPMain.h"
#include "SceneManager.h"

void RegisterComponents() {

}

void LoadScene(eden::SceneManager* scnManager) {
	scnManager->PushScene("Menu");
}