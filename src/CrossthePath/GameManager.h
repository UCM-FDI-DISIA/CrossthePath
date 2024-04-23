#define _CRTDBG_MAP_ALLOC
#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H
#include <unordered_map>
#include <string> 
#include "Singleton.h"
namespace eden_ec {
	class Entity;
	class UIManager;
	class GameManager : public Singleton<GameManager>
	{
		friend Singleton<GameManager>;
	public:
		GameManager();
		~GameManager();

		void Update(float t);

		void PlayerWin();

		void PlayAgain();

		Entity* GetPlayer();

		std::unordered_map<std::string, eden_ec::Entity*> *GetEnemies();
		
		void SetPlayer(Entity* pl);
		void SetUI(UIManager* ui);
		void Begin();
	private:
		Entity* _player = nullptr;
		UIManager* _uiManager = nullptr;
		// Mapa de enemigos del juego
		std::unordered_map<std::string, Entity*> _enemies;
		bool _start = false;
	};
}
#endif //GAME_MANAGER_H
