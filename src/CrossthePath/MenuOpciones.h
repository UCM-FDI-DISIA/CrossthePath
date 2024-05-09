#ifndef MENU_OPCIONES_H
#define MENU_OPCIONES_H

#include "Component.h"
namespace eden_render {
	class RenderManager;
}
namespace eden_ec {
	class CAudioEmitter;
}
namespace ctp {
	/// @brief Clase encargada del menu de Opciones
	class MenuOpciones : public eden_ec::Component {
	public:
		/// @brief Constructora
		MenuOpciones();
		/// @brief Destructora
		~MenuOpciones() = default;
		/// @brief Devuelve el ID del componente
		static std::string GetID() { return _id; }
		/// @brief Init
		void Init(eden_script::ComponentArguments* args) {}
		/// @brief Awake
		void Awake() override {}
		/// @brief Start
		void Start() override;			
		/// @brief Update
		void Update(float t);
		/// @brief Detecta si se ha clickado algun boton del menu y actua correspondientemente
		void ClickButton();

	protected:
		const static std::string _id;
	private:
		/// @brief Contador de iteracion
		int iteration = 0;
		/// @brief Referencias al texto de resolucion
		eden_ec::Entity* _res = nullptr;
		/// @brief Referencia a la barra de volumen
		eden_ec::Entity* _vol = nullptr;
		/// @brief Referenca al boton de fullScreenOff
		eden_ec::Entity* _fullScreenOFF = nullptr;
		/// @brief Referencia al boton de fullScreenOn
		eden_ec::Entity* _fullScreenON = nullptr;
		/// @brief Referencia al AudioEmiter
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;

		/// @brief Sale del menu
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

		/// @brief Compureba si esta a 0 el sonido
		void Muted(float v);
	};
}
#endif //MENU_OPCIONES_H