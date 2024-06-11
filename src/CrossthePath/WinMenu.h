#ifndef WIN_MENU_H
#define WIN_MENU_H

#include "Component.h"

namespace eden_ec {
	class CButton;
	class CAudioEmitter;
	class CTransform;
	class CAnimator;
}
namespace ctp{
	/// @brief Clase encargada de la funcionalidad del menu tras ganar la partida
	class WinMenu : public eden_ec::Component {
	public:
		/// @brief Constructora
		WinMenu();
		/// @brief Destructora
		~WinMenu() = default;
		/// @brief Devuelve el ID del componente
		static std::string GetID() { return _id; }
		/// @brief Recoge los componentes del .lua
		void Init(eden_script::ComponentArguments* args) {}
		/// @brief Necesario override
		void Awake() override {}
		/// @brief Coloca los botones, setea el modo diurno o nocturno y inicia las animaciones y el sonido
		void Start() override;
		/// @brief Actualiza el sonido, las posiciones de los botones y las animaciones del jugador
		void Update(float t) override;
		/// @brief Funcion que se encarga de elegir la funcion adecuada para cada boton clickado
		void Click();

	protected:
		/// @brief ID Del componente
		const static std::string _id;
	private:
		/// @brief Boton de vuelta al menu principal
		eden_ec::CButton* _mainMenu = nullptr;
		/// @brief Boton de exit
		eden_ec::CButton* _exit = nullptr;
		/// @brief Componente de animacion del jugador
		eden_ec::CAnimator* _playerAnimator = nullptr;
		/// @brief Componente de musica del menu
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;

		/// @brief Nueva posision del boton del menu principal
		float _startNewPos = -1;
		/// @brief Nueva posicion del boton de exit
		float _exitNewPos = -1;
		/// @brief Timer de animacion
		float _timer = 5.0f;
		/// @brief Tiempo transcurrido
		float _currentTime = 0.0f;
		/// @brief Booleano de control de animacion
		bool _changeAnim = false;
		/// @brief Booleano de control de animacion
		bool _dance = true;

		/// @brief Posiciones originales de los botones
		std::pair<float, float>_startIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_exitIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_optionsIniPos = std::make_pair(0.0f, 0.0f);
		
		/// @brief Funcion para volver al menu principal
		void Menu();
		/// @brief Funcion para salir de la aplicacion
		void Exit();
	};
}
#endif //WIN_MENU_H


