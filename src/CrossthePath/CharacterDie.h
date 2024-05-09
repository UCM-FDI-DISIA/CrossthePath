#ifndef CHARACTER_DIE
#define CHARACTER_DIE
#include "Component.h"

namespace eden_ec {
	class CRigidBody;
}

namespace ctp{
	/// @brief Clase encargada de gestionar que hacer si el jugador colisiona con un coche
	class CharacterDie : public eden_ec::Component
	{
	public:
		CharacterDie();
		~CharacterDie() = default;

		static std::string GetID() { return _id; }

		/// @brief Recoge los componentes del .lua
		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override {};

		/// @brief Hace referencia al Transform
		void Start() {}

		/// @brief Actualiza el movimiento de los coches segun su direccion y velocidad
		/// @param t deltaTime
		void Update(float t) {}

		/// @brief Comprueba si la colision se realiza o no con el coche
		void RunOver();

	protected:
		const static std::string _id;
	};

}
#endif
