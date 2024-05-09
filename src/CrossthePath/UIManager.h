#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include "Component.h"
#include <vector>

namespace eden_ec {
	class Entity;
}
namespace ctp{
	/// @brief Clase encargada de la gestion de la Ui del gameplay
	class UIManager : public eden_ec::Component 
	{
	public:
		/// @brief Constructora
		UIManager();
		/// @brief Destructora
		~UIManager()=default;
		/// @brief Devuelve el ID del componente
		static std::string GetID() { return _id; }
		/// @brief Init
		void Init(eden_script::ComponentArguments* args) {}
		/// @brief Awake
		void Awake() {}
		/// @brief Start
		void Start();
		/// @brief Update
		void Update(float t) {}
		/// @brief Va al menu de pausa
		void Pause();

		/// @Update del timer
		void Timer(float tm);

	protected:
		const static std::string _id;
	private:
		/// @brief Elementos de Ui
		enum UI_Elements {
			TIMER,PAUSE
		};
		/// @brief Lista de elementos
		std::vector<eden_ec::Entity*> _elements;
		/// @brief Lista de ID de los elementos
		std::vector<std::string> _elementsID = {"UI_timer","UI_pause" };
		/// @brief Timer
		float _timer = 0;
		/// @brief Cambia el texto del timer
		void SetTimerText(int time);
	};
}
#endif //UI_MANAGER_H