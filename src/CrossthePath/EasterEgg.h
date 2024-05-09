#ifndef EASTER_EGGS_H
#define EASTER_EGGS_H

#include "Component.h"

namespace ctp{

	/// @brief Clase encargada de la interaccion con los EasterEggs
	class EasterEgg : public eden_ec::Component {
	public:
		/// @brief Constructora
		EasterEgg();
		/// @brief Destructora base
		~EasterEgg() =default;
		/// @brief Devuelve el ID del componente
		static std::string GetID() { return _id; }
		/// @brief Init
		void Init(eden_script::ComponentArguments* args);
		/// @brief Awake
		void Awake() override {};
		/// @brief Start
		void Start() override;
		/// @brief Update
		void Update(float t) {}
		/// @brief Método que se llama al clickar un EasterEgg y que lo suma al contador del GameManager y lo esconde
		void ClickEasterEggs();

	protected:
		const static std::string _id;
	private :
		/// @brief Flag de si esta oculto o no
		bool hide = false;
	};
}
#endif //EASTER_EGGS_H
