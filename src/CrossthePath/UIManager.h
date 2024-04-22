#define _CRTDBG_MAP_ALLOC
#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include "Component.h"
#include <map>

namespace eden_ec {
	class UIComponent;
	class UIManager : public Component {
	public:
		enum UI_Elements {
			WIN,GAMEOVER,SCORE,TIMER,PLAY,PAUSE
		};
		UIManager();
		~UIManager();

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override;

		void Start() override;

		void Update(float t) override;

		void ShowWin();

		void PlayAgain();

		void Timer(float tm);

	protected:
		const static std::string _id;
	private:
		std::map<int, Entity*> _elementsUI;

		float _timer = 0;
	};
}
#endif //UI_MANAGER_H