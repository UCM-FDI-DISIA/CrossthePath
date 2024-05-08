#ifndef LIMIT_LINE
#define LIMIT_LINE
#include "Component.h"

namespace eden_ec {
	class CRigidBody;
}
namespace ctp{

	class LimitLine : public eden_ec::Component
	{
	public:
		LimitLine();
		~LimitLine() = default;

		static std::string GetID() { return _id; }

		/// @brief Recoge los componentes del .lua
		void Init(eden_script::ComponentArguments* args) {}

		void Awake()  {}

		/// @brief Hace referencia al Transform
		void Start();

		/// @brief Actualiza el movimiento de los coches segun su direccion y velocidad
		/// @param t deltaTime
		void Update(float t) {}

		/// @brief Comprueba si la colision se realiza o no con el coche
		void CollisionLine();

	protected:
		const static std::string _id;
	};

}
#endif
