#include "UIManagerComponent.h"
#define _CRTDBG_MAP_ALLOC
#include "UIManager.h"
#include "GameManager.h"
#include "Entity.h"
#include "ComponentArguments.h"


const std::string eden_ec::UIManagerComponent::_id = "UI_MANAGER_COMPONENT";

eden_ec::UIManagerComponent::UIManagerComponent(int num)
{
	_element = num;
}

void eden_ec::UIManagerComponent::Init(eden_script::ComponentArguments* args)
{
	_element =args->GetValueToInt("Element");
}

void eden_ec::UIManagerComponent::Awake()
{
	eden_ec::GameManager::Instance()->GetUI()->Register(_ent, eden_ec::UIManager::UI_Elements(_element));
}
