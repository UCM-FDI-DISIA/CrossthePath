#include "SendInfoNet.h"
#include "Entity.h"
#include "NetworkManager.h"

#include "Transform.h"

enum typeOfSocket { USERNAME, USER_POS, ENEMY_POS, VECTOR };

struct infoTransform {
	eden_utils::Vector3 pos;
	eden_utils::Quaternion rot;
	bool isAlive;
};

void ctp::SendInfoNet::Update(float dt)
{
	infoTransform iT;
	std::memcpy(&iT, buff, sizeof(infoTransform));
	iT.pos = _transform->GetPosition();
	iT.rot = _transform->GetRotation();
	iT.isAlive = _ent->IsAlive();
	SDLNet_TCP_Send(_socket, &iT, sizeof(iT));
}

void ctp::SendInfoNet::Awake()
{
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_networkManager = eden_net::NetworkManager::Instance();
	_socket = _networkManager->GetSocket(USER_POS);

	_originalPos = _transform->GetPosition();
}

void ctp::SendInfoNet::Restart()
{
	_transform->SetPosition(_originalPos);
}