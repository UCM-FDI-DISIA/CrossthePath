#define _CRTDBG_MAP_ALLOC
#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "Component.h"
#include "Singleton.h"
namespace eden_ec {
	class Entity;
	class GameManager : public Component, public Singleton<GameManager>
	{
		friend Singleton<GameManager>;
	public:
		GameManager() = default;
		~GameManager();

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) override;

		void Start() override;

		void Update(float t) override;

		void PlayerWin();

		Entity* GetPlayer();
		
		void SetPlayer(Entity* pl);

	protected:
		const static std::string _id;
	private:
		Entity* _player = nullptr;
	};
}
#endif //GAME_MANAGER_H
