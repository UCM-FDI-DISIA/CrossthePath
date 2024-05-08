#pragma once
#ifndef ENEMY_MOVEMENT
#define ENEMY_MOVEMENT
#include "Component.h"
#include "Vector3.h"
#include "Quaternion.h"

namespace eden_ec {
	class CTransform;
	class CParticleEmitter;
}
namespace ctp{

	class EnemyMovement : public eden_ec::Component
	{
	public:
		/// @brief Constructora
		EnemyMovement() {}

		/// @brief Destructora
		~EnemyMovement() = default;

		static std::string GetID() { return _id; }

		/// @brief Recoge los componentes del .lua
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {};

		/// @brief Hace referencia al Transform
		void Start() override;

		/// @brief Actualiza el movimiento de los coches segun su direccion y velocidad
		/// @param t deltaTime
		void Update(float t) override;

		/// @brief Le da un valor al booleano _way
		/// @param way 
		void SetWay(bool way);
		/// @brief Le da una direccion de movimiento y velocidad al coche segun el sentido de la marcha
		/// @param _way 
		void SetMov();

	protected:
		const static std::string _id;

	private:
		/// @brief Sentido en el que se mueve el coche: true->izquierda, false->derecha
		bool _way = true;

		/// @brief Referencia al transform del coche
		eden_ec::CTransform* _transform = nullptr;


		/// @brief Vector unitario de direccion de movimiento (en que eje se mueve)
		eden_utils::Vector3 _movDir = { 0,0,0 };

		/// @brief Variable que recibe de .lua que dictamina la velocidad a la que se mueve
		/// Debe ser siempre positivo
		int _vel = 1;

		eden_ec::CParticleEmitter* _particle = nullptr;
	};

}

#endif