#ifndef RECEIVE_INFO_NET_H_
#define RECEIVE_INFO_NET_H_

#include <string>

#include "Component.h"
#include <SDL_net.h>

#include "defs.h"

namespace eden_ec {
    class CTransform;
}

namespace eden_net {
    class NetworkManager;
}

namespace ctp {
    class ReceiveInfoNet : public eden_ec::Component {
    public:
        ReceiveInfoNet() = default;
        ~ReceiveInfoNet() override {}

        /// @brief Inicializa el componente, guardando los argumentos recibidos desde lua
        /// @param args los argumentos que contienen informacion sobre ...
        void Init(eden_script::ComponentArguments* args) override {}
        /// @brief Actualiza ...
        /// @param dt El tiempo transcurrido desde el ultimo frame
        void Update(float dt) override;

        /// @brief Se usa para ...
        void Awake() override;

        /// @brief No usado
        void Start() override {}

        /// @brief Devuelve el identificador del componente
        /// @return Identificador del componente
        static std::string GetID() { return "RECEIVE_INFO_NET"; }
    private:
        SDLNet_SocketSet _socketSet;
        TCPsocket _socket[4];

        eden_net::NetworkManager* _networkManager = nullptr;
        eden_ec::CTransform* _transform = nullptr;

        char buff[256];
    };
}

#endif // RECEIVE_INFO_NET_H_
