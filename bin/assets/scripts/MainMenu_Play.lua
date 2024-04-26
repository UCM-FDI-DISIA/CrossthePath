--Definicion de la clase en Lua
MainMenu_Play = {}

MainMenu_Play.__index = MainMenu_Play

--Constructor de la clase en Lua
function MainMenu_Play:new()
	local obj={}
	setmetatable(obj, MainMenu_Play)
	return obj
end

--Metodo OnButtonClicked
function MainMenu_Play:OnButtonClick()
	print("Estoy encima del boton");
end
function MainMenu_Play:OnButtonReleased()
	print("Has dejado de pulsar para ir al menú\n");
	MainMenu:Play();
end
--Variable global de la clase (para Luabridge)
MainMenu_PlayLua = MainMenu_Play:new()