#define _CRTDBG_MAP_ALLOC
#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "Component.h"

namespace eden_ec {

	class MainMenu : public Component {
	public:
		MainMenu();
		~MainMenu() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override {}

		void Start() override {}

		void Update(float t) override {}

		void Play();

		void ExitGame();

		void Options();

	protected:
		const static std::string _id;
	};
}
#endif //MAIN_MENU_H