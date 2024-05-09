#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H
#include <string> 
#include "Singleton.h"
#include <list>
#include <vector>
namespace eden_ec {
	class Entity;
}

namespace ctp{
	/// @brief Clase encargada de controlar el estado de juego y sus parametros
	class GameManager : public Singleton<GameManager>
	{
		friend Singleton<GameManager>;
	public:
		/// @brief Constructora
		GameManager();
		/// @brief Destructora
		~GameManager();
		/// @brief Awake
		void Awake() {}
		/// @brief Start
		void Start();
		/// @brief Update
		void Update(float t);

		/// @brief Metodo cuando el player gana
		void PlayerWin();		
		/// @brief Metodo cuando el player pierde
		void GameOver();

		/// @brief Instancia la escena del juego y cambia el estado actual
		void Play();
		/// @brief Instancia la escena de pausa y cambia el estado actual
		void PauseGame();
		/// @brief Vuelve a la escena anterior y cambia el estado actual
		void GoBack();
		/// @brief Instancia la escena de opciones y cambia el estado actual
		void GoOptions();
		/// @brief Instancia la escena del menu inicial y cambia el estado actual
		void GoMainMenu();
		/// @brief Cierra el juego
		void CloseGame();

		/// @brief Devuelve el puntero al SoundController del juego
		eden_ec::Entity* GetSound();

		/// @brief Activa y desactiva los spawns de coches deseados
		/// @param id Lista de Spawns para activar
		void SwitchInstanciator(std::vector<std::string> id);
		/// @brief Añade un punto de Spawn a la lista
		void AddInstanciator(eden_ec::Entity* inst);
		/// @brief Vacia la lista de puntos de spawn
		void ClearInstanciator();
		/// @brief Añade un enemigo a la lista de enemigos
		void AddEnemy(eden_ec::Entity* ent);
		/// @brief Pone a un enemigo a SetAlive(false)
		void DestroyEnemy(eden_ec::Entity* ent);

		/// @brief Flag de comienzo de juego
		void Begin();

		/// @brief Devuelve la mejor puntuación actual
		inline int GetBestScore() { return _bestScore; }
		/// @brief Setea la mejor puntiación de la partida actual
		inline void SetBestScore(int best) { if(best < _currScore) _currScore = best; }
		/// @brief Devuelve el número de EasterEggs encontrados
		inline int GetEasterEggs() { return _easterEggs; }
		/// @brief Suma el contador de EasterEggs y lo activa como recogido
		void AddEasterEgg(eden_ec::Entity* egg);
		/// @brief Añade un EasterEgg a la lista
		bool SetEgg(int num, eden_ec::Entity* egg);
		/// @brief Flag de si se han encontrado tods los EasterEggs
		inline bool IsEasterEggComplete() { return _easterEggCompleted; }
		/// @brief Activa el flag de todos los EasterEggs encontrados
		inline void CompleteEasterEgg() { _easterEggCompleted = true; }
		/// @brief Devuelve el nivel actual seleccionado
		inline int GetLevel() { return _level; }
		/// @brief Cambia el nivel actual
		inline void ChangeLevel() { _level= (_level+1)%2; }
		/// @brief Devuelve el timer para los juegos
		inline int GetTimer() { return _timer; }
	private:

		/// @brief Estados del juego
		enum States {
			MainMenu,Game,Pause,Options,Win,Game_Over,Exit
		};

		/// @brief Vector de estados
		std::vector<States>_states;
		/// @brief Estado actual
		States _currState;

		/// @brief Timer de los juegos
		int _timer = 60;
		/// @brief Nivel seleccionado
		int _level = 0;
		/// @brief Referencia al UIManager
		eden_ec::Entity* _uiManager = nullptr;
		/// @brief Referencia al SoundController
		eden_ec::Entity* _sounds = nullptr;
		/// @brief Flag de EasterEggs completado
		bool _easterEggCompleted = false;
		/// @brief lista de EasterEggs
		std::vector <std::pair<bool, eden_ec::Entity*>>_eggsFound = { {false,nullptr},{false,nullptr},{false,nullptr} };
		/// @brief Contador de EasterEggs
		int _easterEggs = 0;
		/// @brief Mejor puntuacion del juego
		int _bestScore = 0;
		/// @brief Mejor puntuacion del nivel actual 
		int _currScore = _timer;

		// Mapa de enemigos del juego
		std::list<eden_ec::Entity*> _enemies;
		/// @brief Flag de empezar el contador
		bool _start = false;
		/// @brief Lista de puntos de Spawn
		std::list<eden_ec::Entity*> _instanciators;
	};
}
#endif //GAME_MANAGER_H
