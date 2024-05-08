#define _CRTDBG_MAP_ALLOC
#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "Component.h"

namespace eden_ec {
	class CButton;
	class CAudioEmitter;
	class CTransform;
	class CAnimator;
	class CText;
}
namespace ctp{
	class GameManager;

	class MainMenu : public eden_ec::Component {
	public:
		MainMenu();
		~MainMenu() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override {}

		void Start() override;

		void Update(float t) override;


		void Click();

	protected:
		const static std::string _id;
	private:
		eden_ec::CButton* _start = nullptr;
		eden_ec::CButton* _options = nullptr;
		eden_ec::CButton* _exit = nullptr;
		eden_ec::CAnimator* _playerAnimator = nullptr;
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;
		eden_ec::CTransform* _transform = nullptr;

		eden_ec::CText* _easterEggs = nullptr;
		GameManager* _gameManager = nullptr;
		int _esterEggNum = -1;
		eden_ec::Entity* _trophy = nullptr;
		int iteration = 0;

		int _startNewPos=-1;
		int _exitNewPos = -1;
		int _optionsNewPos = -1;
		float timer = 5.0f;
		float currentTime = 0.0f;
		bool changeAnim = false;
		bool wave = true;

		bool _endTransition = false;
		std::pair<float, float>_startIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_exitIniPos = std::make_pair(0.0f, 0.0f);
		std::pair<float, float>_optionsIniPos = std::make_pair(0.0f, 0.0f);

		void Play();

		void ExitGame();

		void Options();

		void UpdateEasterEggs();
	};
}
#endif //MAIN_MENU_H