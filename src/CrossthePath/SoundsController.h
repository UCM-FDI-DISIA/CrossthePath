#define _CRTDBG_MAP_ALLOC
#ifndef SOUNDS_CONTROLLER_H
#define SOUNDS_CONTROLLER_H

#include "Component.h"
#include <vector>

namespace eden_ec {
	class Entity;
	class CAudioEmitter;
	class SoundsController : public Component
	{
	public:
		enum Sounds {
			PLAY_BUTTON, ARROW_BUTTON,
		};

		SoundsController()=default;
		~SoundsController()=default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args);

		void Awake() {}

		void Start();

		void Update(float t) {}

		void PlaySound(Sounds _s);

	protected:
		const static std::string _id;
	private:
		std::vector<std::string> _sounds;
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;
	};
}
#endif //SOUNDS_CONTROLLER_H