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
#include <SceneManager.h>

const std::string eden_ec::UIManager::_id = "UI_MANAGER";
void eden_ec::UIManager::Awake() {

}

void eden_ec::UIManager::Start() {
	
	for (int i = 0; i < _elementsID.size(); i++) {
		_elements.push_back(eden::SceneManager::getInstance()->FindEntity(_elementsID[i]));
	}
	if(_elements[WIN]!=nullptr)_elements[WIN]->GetComponent<CImage>()->Hide();
	if (_elements[PLAY] != nullptr)_elements[PLAY]->GetComponent<CButton>()->Hide();
}

eden_ec::UIManager::UIManager()
{
	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Play", &eden_ec::UIManager::PlayAgain, "Replay", this);
	scriptM->Regist(*this, "Play", &eden_ec::UIManager::Pause, "Pause", this);
	scriptM->SetGlobal(this, "Play");
	scriptM = nullptr;
}

eden_ec::UIManager::~UIManager()
{

}

void eden_ec::UIManager::Update(float dt) {

}

void eden_ec::UIManager::ShowWin()
{
	_elements[WIN]->GetComponent<CImage>()->Show();
	_elements[PLAY]->GetComponent<CButton>()->Show();
}

void eden_ec::UIManager::ShowGameOver()
{
	//PROVISIONAL HASTA QUE HAYA UNA IMAGEN DE GAMEOVER
	_elements[WIN]->GetComponent<CImage>()->Show();
}

void eden_ec::UIManager::PlayAgain()
{
	eden_ec::GameManager::Instance()->Play();
}

void eden_ec::UIManager::Pause()
{
	eden_ec::GameManager::Instance()->PauseGame();
}

void eden_ec::UIManager::Timer(float tm)
{
	_timer = _timer + tm;
	std::string aux = std::to_string(round(_timer));
	std::string time = "";
	for (int i = 0; i < aux.length() - 7; i++)time += aux[i];
	_elements[TIMER]->GetComponent<CText>()->SetNewText("Timer: "+ time);
}
