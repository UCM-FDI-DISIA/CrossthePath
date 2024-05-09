#define _CRTDBG_MAP_ALLOC
#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include "Component.h"
#include <vector>

namespace eden_ec {
	class Entity;
}
namespace ctp{

	class UIManager : public eden_ec::Component 
	{
	public:
		UIManager();
		~UIManager()=default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) {}

		void Awake() override;

		void Start();

		void Update(float t) {}

		void Pause();

		/// @Update del timer
		void Timer(float tm);

	protected:
		const static std::string _id;
	private:
		enum UI_Elements {
			TIMER,PAUSE
		};
		std::vector<eden_ec::Entity*> _elements;
		std::vector<std::string> _elementsID = {"UI_timer","UI_pause" };

		float _timer = 0;

		void SetTimerText(int time);
	};
}
#endif //UI_MANAGER_H