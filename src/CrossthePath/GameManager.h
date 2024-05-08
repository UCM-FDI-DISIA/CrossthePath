#define _CRTDBG_MAP_ALLOC
#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H
#include <unordered_map>
#include <string> 
#include "Singleton.h"
#include <vector>
namespace eden_ec {
	class Entity;
	class GameManager : public Singleton<GameManager>
	{
		friend Singleton<GameManager>;
	public:
		GameManager();
		~GameManager();
		void Awake() {}
		void Start();

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

		/// @brief Devuelve el puntero a UIManager del Gameplay
		Entity* GetSound();

		/// @brief Devuelve puntero al player
		Entity* GetPlayer();

		std::unordered_map<std::string, eden_ec::Entity*> *GetEnemies();

		void DestroyEnemy(std::string enemyID);

		/// @brief Flag de comienzo de juego
		void Begin();

		inline int GetBestScore() { return _bestScore; }
		inline void SetBestScore(int best) { if(best>_bestScore) _bestScore = best; }

		inline int GetEasterEggs() { return _easterEggs; }
		void AddEasterEgg(Entity* egg);

		bool SetEgg(int num, Entity* egg);
		inline bool IsEasterEggComplete() { return _easterEggCompleted; }
		inline void CompleteEasterEgg() { _easterEggCompleted = true; }
	private:

		/// @brief Estados del juego
		enum States {
			MainMenu,Game,Pause,Options,Win,Game_Over,Exit
		};

		/// @brief Vector de estados
		std::vector<States>_states;
		/// @brief Estado actual
		States _currState;

		Entity* _player = nullptr;
		Entity* _uiManager = nullptr;
		Entity* _sounds = nullptr;

		bool _easterEggCompleted = false;
		std::vector <std::pair<bool, Entity*>>_eggsFound = { {false,nullptr},{false,nullptr},{false,nullptr} };
		int _bestScore = 0;
		int _easterEggs = 0;

		// Mapa de enemigos del juego
		std::unordered_map<std::string, Entity*> _enemies;
		bool _start = false;
	};
}
#endif //GAME_MANAGER_H
