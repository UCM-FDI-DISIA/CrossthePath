#include "UIManager.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "GameManager.h"
#include "CIMage.h"
#include "CButton.h"
#include "CLuaBehaviour.h"
#include "CText.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include <math.h>

const std::string eden_ec::UIManager::_id = "UI_MANAGER";
void eden_ec::UIManager::Awake() {

}

void eden_ec::UIManager::Start() {
	if(_elementsUI[WIN]!=nullptr)_elementsUI[WIN]->GetComponent<CImage>()->Hide();
	if (_elementsUI[PLAY] != nullptr)_elementsUI[PLAY]->GetComponent<CButton>()->Hide();
}

void eden_ec::UIManager::Register(Entity* ent, UI_Elements element)
{
	_elementsUI[element] = ent;
}

eden_ec::UIManager::UIManager()
{
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Play", &eden_ec::UIManager::PlayAgain, "Replay", this);
	scriptM->SetGlobal(this, "Play");
	scriptM = nullptr;

	eden_ec::GameManager::Instance()->SetUI(this);
}

eden_ec::UIManager::~UIManager()
{

}

void eden_ec::UIManager::Update(float dt) {

}

void eden_ec::UIManager::ShowWin()
{
	_elementsUI[WIN]->GetComponent<CImage>()->Show();
	_elementsUI[PLAY]->GetComponent<CButton>()->Show();
}

void eden_ec::UIManager::PlayAgain()
{
	eden_ec::GameManager::Instance()->PlayAgain();
}

void eden_ec::UIManager::Timer(float tm)
{
	_timer = _timer + tm;
	std::string aux = std::to_string(round(_timer));
	std::string time = "";
	for (int i = 0; i < aux.length() - 7; i++)time += aux[i];
	_elementsUI[TIMER]->GetComponent<CText>()->SetNewText("Timer: "+ time);
}
