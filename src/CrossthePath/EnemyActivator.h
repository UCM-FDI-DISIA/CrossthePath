#ifndef ENEMY_ACTIVATOR
#define ENEMY_ACTIVATOR
#include "Component.h"

namespace eden_ec {
	class CRigidBody;
	class Entity;
}
namespace ctp {

	class EnemyActivator : public eden_ec::Component
	{
	public:
		EnemyActivator() = default;
		~EnemyActivator() = default;

		static std::string GetID() { return _id; }

		/// @brief Recoge los componentes del .lua
		void Init(eden_script::ComponentArguments* args);

		void Awake() {}

		/// @brief Hace referencia al Transform
		void Start() {};

		/// @brief Actualiza el movimiento de los coches segun su direccion y velocidad
		/// @param t deltaTime
		void Update(float t) {}

		/// @brief Comprueba si la colision se realiza o no con el coche
		void CollisionLine();

	protected:
		const static std::string _id;
		std::vector<std::string> _activate;
	};

}
#endif //ENEMY_ACTIVATOR
