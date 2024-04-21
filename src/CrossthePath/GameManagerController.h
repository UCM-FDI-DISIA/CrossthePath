#define _CRTDBG_MAP_ALLOC
#ifndef GAME_MANAGER_CONTROLLER_H
#define GAME_MANAGER_CONTROLLER_H

#include "Component.h"
#include "Singleton.h"
namespace eden_ec {
	class Entity;
	class UIManager;
	class GameManagerController : public Component	{
	public:
		GameManagerController();
		~GameManagerController();

		void Update(float t);
		void Start(){}
		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {};
	protected:
		const static std::string _id;
	};
}
#endif //GAME_MANAGER_CONTROLLER_H
