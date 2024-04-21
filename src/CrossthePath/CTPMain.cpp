#include "CTPMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "Hito2MenuPausa.h"
#include "CharacterMovement.h"
#include "CameraMovement.h"
#include "FinishLine.h"
#include "UIManager.h"
#include "GameManagerController.h"

void RegisterComponents(eden_ec::ComponentFactory* factory) {
	factory->RegisterComponent<eden_ec::Hito2MenuPausa>();
	factory->RegisterComponent<eden_ec::CharacterMovement>();
	factory->RegisterComponent<eden_ec::CameraMovement>();
	factory->RegisterComponent<eden_ec::FinishLine>();
	factory->RegisterComponent<eden_ec::UIManager>();
	factory->RegisterComponent<eden_ec::GameManagerController>();
}

void LoadScene(eden::SceneManager* scnManager) {
	scnManager->PushScene("Menu");
}

