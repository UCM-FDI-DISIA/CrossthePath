#pragma once
#ifndef ENEMY_MOVEMENT
#define ENEMY_MOVEMENT
#include "Component.h"
#include "Vector3.h"
#include "Quaternion.h"

namespace eden_ec {
	class CTransform;

	class EnemyMovement : public Component
	{
	public:

		EnemyMovement(){}
		~EnemyMovement() = default;

		static std::string GetID() { return _id; }

		/// @brief 
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {};

		/// @brief Hace referencia al Transform
		void Start() override;

		/// @brief 
		/// @param t deltaTime
		void Update(float t) override;

	protected:
		const static std::string _id;

	private:
		/// @brief Sentido en el que se mueve el coche: true->izquierda, false->derecha
		bool _way;

		eden_ec::CTransform* _transform;

		void SetMov(bool _way);

		void SetInitRotation(bool _way);

		eden_utils::Vector3 _movDir;

		int _vel;
	};

}

#endif