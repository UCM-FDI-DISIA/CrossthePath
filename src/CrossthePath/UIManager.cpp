#include "UIManager.h"
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

const std::string ctp::UIManager::_id = "UI_MANAGER";


void ctp::UIManager::Start() {
	
	for (int i = 0; i < _elementsID.size(); i++) {
		_elements.push_back(eden::SceneManager::getInstance()->FindEntity(_elementsID[i]));
	}
	_timer = ctp::GameManager::Instance()->GetTimer();
	SetTimerText((int)_timer);
}

ctp::UIManager::UIManager()
{
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Play", &ctp::UIManager::Pause, "Pause", this);
	scriptM->SetGlobal(this, "Play");
	scriptM = nullptr;
}

void ctp::UIManager::Pause()
{
	ctp::GameManager::Instance()->PauseGame();
}

void ctp::UIManager::Timer(float tm)
{
	_timer = _timer - tm;
	SetTimerText((int)_timer);

	if(_timer<=0)ctp::GameManager::Instance()->GameOver();
	else ctp::GameManager::Instance()->SetBestScore(round(_timer));
}

void ctp::UIManager::SetTimerText(int timer)
{
	std::string aux = std::to_string(round(timer));
	std::string time = "";
	for (int i = 0; i < aux.length() - 7; i++)time += aux[i];
	_elements[TIMER]->GetComponent<eden_ec::CText>()->SetNewText("Timer: " + time);
}
