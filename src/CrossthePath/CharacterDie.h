#ifndef CHARACTER_DIE
#define CHARACTER_DIE
#include "Component.h"

namespace eden_ec {
	class CRigidBody;

	class CharacterDie : public Component
	{
	public:
		CharacterDie();
		~CharacterDie() = default;

		static std::string GetID() { return _id; }

		/// @brief Recoge los componentes del .lua
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {};

		/// @brief Hace referencia al Transform
		void Start() override;

		/// @brief Actualiza el movimiento de los coches segun su direccion y velocidad
		/// @param t deltaTime
		void Update(float t) override;

		bool RunOver();

	protected:
		const static std::string _id;

	private:
		eden_ec::CRigidBody* _rb = nullptr;
		bool _isDead = false;
	};

}
#endif
