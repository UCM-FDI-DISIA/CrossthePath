#ifndef SOUNDS_CONTROLLER_H
#define SOUNDS_CONTROLLER_H

#include "Component.h"
#include <vector>

namespace eden_ec {
	class Entity;
	class CAudioEmitter;
}

namespace ctp{
	/// @brief Clase encargada del control de los sonidos del juego
	class SoundsController : public eden_ec::Component
	{
	public:
		/// @brief sonidos
		enum Sounds {
			PLAY_BUTTON, ARROW_BUTTON, EASTEREGG, EASTEREGG_TROPHY
		};

		SoundsController()=default;
		~SoundsController()=default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args);

		void Awake() {}

		void Start();

		void Update(float t) {}

		/// @brief Método que reproduce un sonido de la lista
		void PlaySound(Sounds _s);

	protected:
		const static std::string _id;
	private:
		/// @brief lista de sonidos
		std::vector<std::string> _sounds;
		/// @brief Puntero a lAudioEmiter
		eden_ec::CAudioEmitter* _audioEmitter = nullptr;
	};
}
#endif //SOUNDS_CONTROLLER_H