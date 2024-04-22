#include "UIManager.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "GameManager.h"
#include "CIMage.h"
#include "CButton.h"
#include "CLuaBehaviour.h"
#include "CText.h"

#include <Canvas.h>
#include <ScriptManager.h>
#include <LuaManager.h>
#include <math.h>

const std::string eden_ec::UIManager::_id = "UI_MANAGER";
void eden_ec::UIManager::Awake() {

	eden_ec::GameManager::Instance()->SetUI(this);

	eden_canvas::Canvas* canvas = eden_canvas::Canvas::Instance();

	Entity* ent = new Entity("win",_ent->GetSceneID());
	ent->AddComponent<eden_ec::CImage>("win", 50, 40, 75, 75, "Win.png", 1);
	ent->GetComponent<CImage>()->Register(ent->GetSceneID());
	ent->GetComponent<CImage>()->SetParameters();
	_elementsUI[WIN] = ent;

	ent = new Entity ("play", _ent->GetSceneID());
	ent->AddComponent<eden_ec::CLuaBehaviour>("PlayGame");
	ent->GetComponent<CLuaBehaviour>()->LoadScript();
	ent->AddComponent<eden_ec::CButton>("play", 50, 80, 30, 15, "MenuButton_Ini.png", "MenuButton_Over.png", "MenuButton_Clicked.png", 2);
	ent->GetComponent<CButton>()->SetCallBack();
	ent->GetComponent<CButton>()->Register(ent->GetSceneID());
	ent->GetComponent<CButton>()->SetParameters();
	_elementsUI[PLAY] = ent;

	ent = new Entity("timer", _ent->GetSceneID());
	ent->AddComponent<eden_ec::CText>("timer", 85, 7, 7,"Timer: 0", "", 0, 0, 0, 2);
	ent->GetComponent<CText>()->Register(ent->GetSceneID());
	ent->GetComponent<CText>()->SetParameters();
	_elementsUI[TIMER] = ent;

}

void eden_ec::UIManager::Start() {
	_elementsUI[WIN]->GetComponent<CImage>()->Hide();
	_elementsUI[PLAY]->GetComponent<CButton>()->Hide();
}

eden_ec::UIManager::UIManager()
{
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Play", &eden_ec::UIManager::PlayAgain, "Replay", this);
	scriptM->SetGlobal(this, "Play");
	scriptM = nullptr;
}

eden_ec::UIManager::~UIManager()
{
	for (auto it = _elementsUI.begin(); it != _elementsUI.end(); it++) {
		delete (*it).second;
	}
}

void eden_ec::UIManager::Init(eden_script::ComponentArguments* args) {
}

void eden_ec::UIManager::Update(float dt) {

	for (auto it = _elementsUI.begin(); it != _elementsUI.end(); it++) {
		(*it).second->Update(dt);
	}
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
