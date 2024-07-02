#include "ReceiveInfoNet.h"
#include "Entity.h"
#include "NetworkManager.h"

#include "Transform.h"

enum typeOfSocket { USERNAME, USER_POS, ENEMY_POS, VECTOR };

struct infoTransform {
	eden_utils::Vector3 pos;
	eden_utils::Quaternion rot;
    bool isAlive;
};

void ctp::ReceiveInfoNet::Update(float dt)
{
    if (SDLNet_CheckSockets(_socketSet, SDL_MAX_UINT32) > 0) {
        int result = 0;
        for (int i = 0; i < 4; ++i) {
            if (_socket[i] != nullptr && SDLNet_SocketReady(_socket[i])) {
                result = SDLNet_TCP_Recv(_socket[i], buff, 255);
                if (result <= 0) {
                    SDLNet_TCP_Close(_socket[i]);
                    SDLNet_TCP_DelSocket(_socketSet, _socket[i]);
                    _socket[i] = nullptr;
                }
                else {
                    if (result == sizeof(infoTransform)) {
                        infoTransform iT;
                        std::memcpy(&iT, buff, sizeof(infoTransform));
                        _transform->SetPosition(iT.pos);
                        _transform->SetRotation(iT.rot);
                        _ent->SetAlive(iT.isAlive);
                    }
                }
            }
        }
    }
}

void ctp::ReceiveInfoNet::Awake()
{
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_networkManager = eden_net::NetworkManager::Instance();
    _socketSet = _networkManager->GetSocketSet();
    for (int i = 0; i < 4; ++i) {
        _socket[i] = _networkManager->GetSocket(i);
    }
}
