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
		eden_ec::Entity* GetSound();

		void SwitchInstanciator(std::vector<std::string> id);
		void AddInstanciator(eden_ec::Entity* inst);

		void AddEnemy(eden_ec::Entity* ent);
		void DestroyEnemy(eden_ec::Entity* ent);

		/// @brief Flag de comienzo de juego
		void Begin();

		inline int GetBestScore() { return _bestScore; }
		inline void SetBestScore(int best) { if(best>_bestScore) _bestScore = best; }

		inline int GetEasterEggs() { return _easterEggs; }
		void AddEasterEgg(eden_ec::Entity* egg);

		bool SetEgg(int num, eden_ec::Entity* egg);
		inline bool IsEasterEggComplete() { return _easterEggCompleted; }
		inline void CompleteEasterEgg() { _easterEggCompleted = true; }

		inline int GetLevel() { return _level; }
		inline void ChangeLevel() { _level= (_level+1)%2; }
	private:

		/// @brief Estados del juego
		enum States {
			MainMenu,Game,Pause,Options,Win,Game_Over,Exit
		};

		/// @brief Vector de estados
		std::vector<States>_states;
		/// @brief Estado actual
		States _currState;

		int _level = 0;
		eden_ec::Entity* _player = nullptr;
		eden_ec::Entity* _uiManager = nullptr;
		eden_ec::Entity* _sounds = nullptr;

		bool _easterEggCompleted = false;
		std::vector <std::pair<bool, eden_ec::Entity*>>_eggsFound = { {false,nullptr},{false,nullptr},{false,nullptr} };
		int _bestScore = 0;
		int _easterEggs = 0;

		// Mapa de enemigos del juego
		std::list<eden_ec::Entity*> _enemies;
		bool _start = false;
		std::list<eden_ec::Entity*> _instanciators;
	};
}
#endif //GAME_MANAGER_H
