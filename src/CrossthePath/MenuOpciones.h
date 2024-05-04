#define _CRTDBG_MAP_ALLOC
#ifndef MENU_OPCIONES_H
#define MENU_OPCIONES_H

#include "Component.h"
namespace eden_render {
	class RenderManager;
}
namespace eden_ec {
	class MenuOpciones : public Component {
	public:
		MenuOpciones();
		~MenuOpciones() = default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override {}

		void Start() override;
			

		void Update(float t);

		void GoBack();

		/// @brief Pantalla completa
		void FullScreen();

		/// @brief Cambia la resolución
		void NextResolution();

		/// @brief Cambia la resolución
		void PreviousResolution();

		/// @brief Setea la nueva resolución
		void ChangeResolution();

		/// @brief Actualiza el texto
		void ChangeResolutionText();

		/// @brief Aumenta el volumen
		void IncreaseVolumen();

		/// @brief Aumenta el volumen
		void DecreaseVolumen();

		/// @brief Cambia el volumen
		void ChangeVolumen(int num);


	protected:
		const static std::string _id;
	private:
		int iteration = 0;
		Entity* _res = nullptr;
		Entity* _vol = nullptr;

	};
}
#endif //MENU_OPCIONES_H