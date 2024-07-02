#ifndef SEND_INFO_NET_H_
#define SEND_INFO_NET_H_

#include <string>

#include "Component.h"

#include "defs.h"

namespace eden_ec {
    class CTransform;
}

namespace eden_net {
    class NetworkManager;
}

namespace ctp {
    class SendInfoNet : public eden_ec::Component {
    public:
        SendInfoNet() = default;
        ~SendInfoNet() override;

        /// @brief Inicializa el componente, guardando los argumentos recibidos desde lua
        /// @param args los argumentos que contienen informacion sobre ...
        void Init(eden_script::ComponentArguments* args) override {}
        /// @brief Actualiza ...
        /// @param dt El tiempo transcurrido desde el ultimo frame
        void Update(float dt) override;

        /// @brief Se usa para ...
        void Awake() override;

        /// @brief No usado
        void Start() override;

        /// @brief Devuelve el identificador del componente
        /// @return Identificador del componente
        static std::string GetID() { return "SEND_INFO_NET"; }

        // uint32_t getNetworkID() const { return networkID; }
    private:
        eden_net::NetworkManager* _networkManager = nullptr;
        eden_ec::CTransform* _transform = nullptr;
    };
}

#endif // SEND_INFO_NET_H_
