#define _CRTDBG_MAP_ALLOC
#ifndef EASTER_EGGS_H
#define EASTER_EGGS_H

#include "Component.h"

namespace ctp{

	/// @brief Clase encargada del movimiento de la camara siguiendo al jugador
	class EasterEgg : public eden_ec::Component {
	public:
		EasterEgg();
		~EasterEgg() =default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args);

		void Awake() override {};

		void Start() override;

		void Update(float t) {}

		void ClickEasterEggs();

	protected:
		const static std::string _id;
	private :
		bool hide = false;
	};
}
#endif //EASTER_EGGS_H
