#define _CRTDBG_MAP_ALLOC
#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

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
		
		void SetPlayer(Entity* pl);
		void SetUI(UIManager* ui);
		void Begin();
	private:
		Entity* _player = nullptr;
		UIManager* _uiManager = nullptr;

		bool _start = false;
	};
}
#endif //GAME_MANAGER_H
