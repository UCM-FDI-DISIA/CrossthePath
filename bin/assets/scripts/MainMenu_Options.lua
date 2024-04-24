--Definicion de la clase en Lua
MainMenu_Options = {}

MainMenu_Options.__index = MainMenu_Options

--Constructor de la clase en Lua
function MainMenu_Options:new()
	local obj={}
	setmetatable(obj, MainMenu_Options)
	return obj
end

--Metodo OnButtonClicked
function MainMenu_Options:OnButtonClick()
	print("Estoy encima del boton");
end
function MainMenu_Options:OnButtonReleased()
	print("Has dejado de pulsar para ir al menú\n");
	MainMenu:GoToOptions();
end
--Variable global de la clase (para Luabridge)
MainMenu_OptionsLua = MainMenu_Options:new()