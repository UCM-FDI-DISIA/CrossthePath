#ifndef GAME_MANAGER_CONTROLLER_H
#define GAME_MANAGER_CONTROLLER_H

#include "Component.h"
#include "Singleton.h"

namespace eden_ec {
	class Entity;
	class UIManager;
}
namespace ctp{
	class GameManager;
	class GameManagerController : public eden_ec::Component	{
	public:
		GameManagerController();
		~GameManagerController();

		void Update(float t);
		void Awake() override;
		void Start() override;
		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {};
	protected:
		const static std::string _id;
	private:
		ctp::GameManager* _gameManager;
		bool original = false;
	};
}
#endif //GAME_MANAGER_CONTROLLER_H
