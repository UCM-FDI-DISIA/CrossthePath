#define _CRTDBG_MAP_ALLOC
#ifndef UI_MANAGER_COMPONENT_H
#define UI_MANAGER_COMPONENT_H

#include "Component.h"

namespace eden_ec {
	/// @brief Clase para añadir elementod de ui al UIManager
	class UIManagerComponent : public Component {
	public:
		UIManagerComponent(int num);
		UIManagerComponent()=default;
		~UIManagerComponent()=default;

		static std::string GetID() { return _id; }

		void Init(eden_script::ComponentArguments* args) override;

		void Awake()override;

		void Start() {}

		void Update(float t) {}

	protected:
		const static std::string _id; 
	private :
		int _element = 0;
	};
}
#endif //UI_MANAGER_COMPONENT_H