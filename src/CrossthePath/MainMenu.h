#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "Component.h"

namespace eden_ec {
	class CButton;
	class CAudioEmitter;
	class CTransform;
	class CAnimator;
	class CText;
}
namespace ctp{
	class GameManager;
	/// @brief Clase encargada del MainMenu
	class MainMenu : public eden_ec::Component {
	public:
		/// @brief Constructora
		MainMenu();
		/// @brief Destructora
		~MainMenu() = default;
		/// @brief Devuelve el ID del componente
		static std::string GetID() { return _id; }
		/// @brief Init
		void Init(eden_script::ComponentArguments* args) {}
		/// @brief Awake
		void Awake() override {}
		/// @brief Start
		void Start() override;
		/// @brief Update
		void Update(float t) override;
		/// @brief Cambia el nivel de juego
		void GameMode();
		/// @brief Detecta si se ha clickado alguno de los botones y llama al método adecuado para cada uno
		void Click();
		/// @brief Cambia la estetica al modo noche
		void SetDarkMode();
		/// @brief Cambia la estetica al mado dia
		void SetDayMode();

	protected:
		const static std::string _id;
	private:
		/// @brief Referencia al boton de play
		eden_ec::CButton* _start = nullptr;
		/// @brief Referencia al boton de opciones
		eden_ec::CButton* _options = nullptr;
		/// @brief Referencia al boton de exit
		eden_ec::CButton* _exit = nullptr;
		/// @brief Referencia al Animator del player
		eden_ec::CAnimator* _playerAnimator = nullptr;
		/// @brief Referencia al AudioEmiter
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;
		/// @brief Referencia al transform
		eden_ec::CTransform* _transform = nullptr;
		/// @brief Referencia al texro de los easterEggs
		eden_ec::CText* _easterEggs = nullptr;
		/// @brief Referencia al GameManager
		GameManager* _gameManager = nullptr;
		/// @brief Número de EasterEggs encontrados
		int _esterEggNum = -1;
		/// @brief Referencia al trofeo de los EasterEggs
		eden_ec::Entity* _trophy = nullptr;
		/// @brief Contador de iteracion
		int iteration = 0;
		
		/// @brief Nueva posicion del boton de play
		int _startNewPos=-1;
		/// @brief Nueva posicion del boton de exit
		int _exitNewPos = -1;
		/// @brief Nueva posicion del boton de opciones
		int _optionsNewPos = -1;
		/// @brief Timer
		float timer = 5.0f;
		/// @brief Tiempo actual
		float currentTime = 0.0f;
		/// @brief Flag de cambio de animacion
		bool changeAnim = false;
		/// @brief Flag de saludo
		bool wave = true;

		/// @brief Flag de fin de transicion
		bool _endTransition = false;

		/// @brief Posiciones originales de los botones
		std::pair<float, float>_startIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_exitIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_optionsIniPos = std::make_pair(0.0f, 0.0f);

		/// @brief Metodo que empieza el nivel
		void Play();
		/// @brief Metodo que cierra el juego
		void ExitGame();
		/// @brief Metodo que va al menu de opciones
		void Options();
		/// @brief Metodo que actualiza el texto de easterEggs
		void UpdateEasterEggs();
	};
}
#endif //MAIN_MENU_H