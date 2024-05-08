#define _CRTDBG_MAP_ALLOC
#ifndef MENU_OPCIONES_H
#define MENU_OPCIONES_H

#include "Component.h"
namespace eden_render {
	class RenderManager;
}

namespace ctp {
	class MenuOpciones : public eden_ec::Component {
	public:
		MenuOpciones();
		~MenuOpciones() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override {}

		void Start() override;			

		void Update(float t);

		void ClickButton();

	protected:
		const static std::string _id;
	private:
		int iteration = 0;
		eden_ec::Entity* _res = nullptr;
		eden_ec::Entity* _vol = nullptr;
		eden_ec::Entity* _fullScreenOFF = nullptr;
		eden_ec::Entity* _fullScreenON = nullptr;

		void GoBack();

		/// @brief Pantalla completa
		void FullScreen();

		/// @brief Cambia la resolución
		void NextResolution();

		/// @brief Cambia la resolución
		void PreviousResolution();

		/// @brief Actualiza el texto
		void ChangeResolutionText();

		/// @brief Aumenta el volumen
		void IncreaseVolumen();

		/// @brief Aumenta el volumen
		void DecreaseVolumen();

		/// @brief Cambia el volumen
		void ChangeVolumen(float num);
		/// @brief Setea la barra de volumen
		void ChangeVolumenBar();
		/// @brief Setea la nueva resolución
		void ChangeResolution();

		void Muted(float v);
	};
}
#endif //MENU_OPCIONES_H