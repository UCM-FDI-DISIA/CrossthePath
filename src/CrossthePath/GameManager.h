#define _CRTDBG_MAP_ALLOC
#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H
#include <unordered_map>
#include <string> 
#include "Singleton.h"
#include <vector>
namespace eden_ec {
	class Entity;
	class UIManager;
	class GameManager : public Singleton<GameManager>
	{
		friend Singleton<GameManager>;
	public:
		GameManager();
		~GameManager();
		void Awake() {}
		void Start() {}

		void Update(float t);

		/// @brief M�todo cuando el player gana
		void PlayerWin();
		
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
		UIManager* GetUI();

		/// @brief Devuelve puntero al player
		Entity* GetPlayer();

		std::unordered_map<std::string, eden_ec::Entity*> *GetEnemies();

		void DestroyEnemy(std::string enemyID);
		
		/// @brief Setea el player
		void SetPlayer(Entity* pl);

		/// @brief Setea el UIManager
		void SetUI(UIManager* ui);

		/// @brief Flag de comienzo de juego
		void Begin();
	private:

		/// @brief Estados del juego
		enum States {
			MainMenu,Game,Pause,Options,Win,GameOver,Exit
		};

		/// @brief Vector de estados
		std::vector<States>_states;
		/// @brief Estado actual
		States _currState;

		Entity* _player = nullptr;
		UIManager* _uiManager = nullptr;
		// Mapa de enemigos del juego
		std::unordered_map<std::string, Entity*> _enemies;
		bool _start = false;
	};
}
#endif //GAME_MANAGER_H
