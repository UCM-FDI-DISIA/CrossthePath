#include "CTPMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "Hito2MenuPausa.h"
#include "CharacterMovement.h"
#include "CameraMovement.h"

void RegisterComponents(eden_ec::ComponentFactory* factory) {
	factory->RegisterComponent<eden_ec::Hito2MenuPausa>();
	factory->RegisterComponent<eden_ec::CharacterMovement>();
	factory->RegisterComponent<eden_ec::CameraMovement>();
}

void LoadScene(eden::SceneManager* scnManager) {
	scnManager->PushScene("Menu");
}

