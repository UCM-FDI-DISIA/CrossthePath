#define _CRTDBG_MAP_ALLOC
#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include "Component.h"
#include <vector>

namespace eden_ec {
	class Entity;
	class UIManager : public Component 
	{
	public:
		UIManager();
		~UIManager();

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override;

		void Start();

		void Update(float t) override;

		/// @brief Enseña el cartel de Win
		void ShowWin();

		/// @breig Replay
		void PlayAgain();

		void Pause();

		/// @Update del timer
		void Timer(float tm);

	protected:
		const static std::string _id;
	private:
		enum UI_Elements {
			WIN,TIMER,PLAY,PAUSE,GAMEOVER,SCORE
		};
		std::vector<Entity*> _elements;
		std::vector<std::string> _elementsID = { "UI_win","UI_timer","UI_play" };

		float _timer = 0;
	};
}
#endif //UI_MANAGER_H