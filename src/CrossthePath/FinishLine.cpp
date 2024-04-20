#include "FinishLine.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "Transform.h"
#include "GameManager.h"

const std::string eden_ec::FinishLine::_id = "FINISH_LINE";
void eden_ec::FinishLine::Start() {
	_transform = _ent->GetComponent<CTransform>();
	_playerTransform = eden_ec::GameManager::Instance()->GetPlayer()->GetComponent<CTransform>();
}

void eden_ec::FinishLine::Update(float dt)
{
	if (!win && _playerTransform->GetPosition().GetX() < _transform->GetPosition().GetX()) {
		win = true;
		eden_ec::GameManager::Instance()->PlayerWin();
	}
}

