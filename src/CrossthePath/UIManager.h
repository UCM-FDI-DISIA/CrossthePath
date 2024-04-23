#define _CRTDBG_MAP_ALLOC
#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include "Component.h"
#include <map>

namespace eden_ec {
	class UIComponent;
	class Entity;
	class UIManager : public Component 
	{
	public:
		enum UI_Elements {
			WIN,GAMEOVER,SCORE,TIMER,PLAY,PAUSE
		};
		UIManager();
		~UIManager();

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override;

		void Start() override;

		/// @brief Registra los elementos de la UI
		void Register(Entity* ent, UI_Elements element);

		void Update(float t) override;

		/// @brief Enseña el cartel de Win
		void ShowWin();

		/// @breig Replay
		void PlayAgain();

		/// @Update del timer
		void Timer(float tm);

	protected:
		const static std::string _id;
	private:
		std::map<int, Entity*> _elementsUI;

		float _timer = 0;
	};
}
#endif //UI_MANAGER_H