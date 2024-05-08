#define _CRTDBG_MAP_ALLOC
#ifndef MENU_PAUSA_H
#define MENU_PAUSA_H

#include "Component.h"

namespace eden_ec {
	class CAudioEmitter;
}
namespace ctp {

	class MenuPausa : public eden_ec::Component {
	public:
		MenuPausa();
		~MenuPausa() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override {}

		void Start() override;

		void Update(float t) override {}

		void ResumeGame();

		void ExitGame();

		void BackToMenu();

		void Options();

		void Click();

	protected:
		const static std::string _id;
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;

	};
}
#endif //MENU_PAUSA_H