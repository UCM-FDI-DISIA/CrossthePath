#ifndef CROSS_THE_PATH_C_INSTANCIATE_ENEMIES_H
#define CROSS_THE_PATH_C_INSTANCIATE_ENEMIES_H

#include "Component.h"
#include "Vector3.h"
#include "string"
#include "vector"

namespace eden {
	class SceneManager;
}

namespace ctp {
	/// @brief Clase encargada de instanciar los enemigos (coches) de Cross The Path cada cierto tiempo
	/// determinado por un float _spawnRate
	class InstanciateEnemies : public eden_ec::Component
	{
	public:
		InstanciateEnemies() = default;
		~InstanciateEnemies() override {};

		/// @brief Metodo encargado de obtener el nombre del prefab y el spawnRate de lua
		/// @param args La informacion que contiene el string _prefabName y el float _spawnRate
		void Init(eden_script::ComponentArguments* args) override;
		/// @brief Metodo que guarda la referencia al SceneManager
		void Awake() override;
		/// @brief Metodo que guarda la posicion en la que deben aparecer los enemigos
		void Start() override;
		/// @brief Metodo que llama a que se instancie un enemigo cada X tiempo determinado por el _spawnRate
		/// @param t El tiempo desde el ultimo frame
		void Update(float t) override;
		/// @brief Metodo que devuelve el ID del componente
		/// @return el ID del componente
		static std::string GetID() { return _id; }
		/// @brief Metodo que instancia el enemigo correspondiente
		void InstanciateEnemy();

		void SetActive(bool active) { _active = active; }
	protected:
		/// @brief el ID del componente
		const static std::string _id;

	private:
		/// @brief Referencia al SceneManager
		eden::SceneManager* _scnMng = nullptr;
		/// @brief Nombre del prefab del enemigo en Lua
		std::vector<std::string> _prefabName;
		/// @brief Posicion en la que deben aparecer los enemigos
		eden_utils::Vector3 _pos;
		/// @brief Tiempo que debe pasar para que se instancie cada enemigo
		float _spawnRate = 0.0f;
		/// @brief Timer auxiliar de la clase
		float _timer = 0.0f;
		/// @brief booleano que indica la direccion inicial de los coches
		bool _isLeft = true;
		bool _active = true;
		
	};
}

#endif // CROSS_THE_PATH_C_INSTANCIATE_ENEMIES_H