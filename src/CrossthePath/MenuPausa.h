#ifndef MENU_PAUSA_H
#define MENU_PAUSA_H

#include "Component.h"

namespace eden_ec {
	class CAudioEmitter;
}
namespace ctp {
	/// @brief Clase encargada del menu de Pusa
	class MenuPausa : public eden_ec::Component {
	public:
		/// @brief Constructora
		MenuPausa();
		/// @brief Destructora
		~MenuPausa() = default;
		/// @brief Devuelve el ID del componente
		static std::string GetID() { return _id; }
		/// @brief Init
		void Init(eden_script::ComponentArguments* args) {}
		/// @brief Awake
		void Awake() override {}
		/// @brief Start
		void Start() override;
		/// @brief Update
		void Update(float t) override {}
		/// @brief Vuelve al juego
		void ResumeGame();
		/// @brief Cierra el juego
		void ExitGame();
		/// @brief Vuelve al menu inicial
		void BackToMenu();
		/// @brief Va al menu de opciones
		void Options();
		/// @brief Detecta si se ha clickado en alguno de los botones del menu y actua acorde al boton
		void Click();

	protected:
		const static std::string _id;
		/// @brief Referencia la AudioEmitter
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;

	};
}
#endif //MENU_PAUSA_H