#define _CRTDBG_MAP_ALLOC
#ifndef FINISH_LINE_H
#define FINISH_LINE_H

#include "Component.h"
#include <string>
#include <unordered_map>

namespace eden_ec {
	class CTransform;
	/// @brief Clase encargada de detectar cuando el jugador llega a la meta
	class FinishLine : public Component {
	public:
		FinishLine() = default;
		~FinishLine() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args);

		void Awake() override {};

		void Start() override;

		void Update(float t) {}

		void Collision();
	protected:
		const static std::string _id;
	private:
		void DestroyEntities();
		void PlayerWin();
	};
}
#endif //FINISH_LINE_H
