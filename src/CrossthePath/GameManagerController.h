#ifndef GAME_MANAGER_CONTROLLER_H
#define GAME_MANAGER_CONTROLLER_H

#include "Component.h"
#include "Singleton.h"

namespace eden_ec {
	class Entity;
	class UIManager;
}
namespace ctp{
	class GameManager;
	/// @brief Clase encargada de Instanciar y Cerrar el GameManager
	class GameManagerController : public eden_ec::Component	{
	public:
		/// @brief Constructora
		GameManagerController();
		/// @brief Destructora
		~GameManagerController();
		/// @brief Update
		void Update(float t);
		/// @brief Awake
		void Awake() {}
		/// @brief Start
		void Start() override;
		/// @brief Devuelve el ID del componente
		static std::string GetID() { return _id; }
		/// @brief init
		void Init(eden_script::ComponentArguments* args) {};
	protected:
		const static std::string _id;
	private:
		/// @brief Referencia al GameManget
		ctp::GameManager* _gameManager;
		/// @brief Flag de si es el GameManager original para borrarlo al terminar la ejecución
		bool original = false;
	};
}
#endif //GAME_MANAGER_CONTROLLER_H
