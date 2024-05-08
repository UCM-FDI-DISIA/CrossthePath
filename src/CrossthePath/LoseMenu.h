#define _CRTDBG_MAP_ALLOC
#ifndef LOSE_MENU_H
#define LOSE_MENU_H

#include "Component.h"

namespace eden_ec {
	class CButton;
	class CAudioEmitter;
	class CTransform;
	class CAnimator;

	class LoseMenu : public Component {
	public:
		LoseMenu();
		~LoseMenu() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override {}

		void Start() override;

		void Update(float t) override;

		void Menu();

		void Exit();

		void Retry();

		void Click();

	protected:
		const static std::string _id;
	private:
		CButton* _mainMenu = nullptr;
		CButton* _exit = nullptr;
		CAnimator* _playerAnimator = nullptr;
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;
		eden_ec::CTransform* _transform = nullptr;

		int _startNewPos = -1;
		int _exitNewPos = -1;
		int _optionsNewPos = -1;
		float timer = 5.0f;
		float currentTime = 0.0f;
		bool changeAnim = false;
		bool dance = true;
		std::pair<float, float>_startIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_exitIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_optionsIniPos = std::make_pair(0.0f, 0.0f);
	};
}
#endif //LOSE_MENU_H


