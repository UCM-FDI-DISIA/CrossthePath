--Definicion de la clase en Lua
MainMenu = {}

MainMenu.__index = MainMenu

--Constructor de la clase en Lua
function MainMenu:new()
	local obj={}
	setmetatable(obj, MainMenu)
	return obj
end

--Metodo OnButtonClicked
function MainMenu:OnButtonClick()
	print("Estoy encima del boton");
end
function MainMenu:OnButtonReleased()
	print("Estoy encima del boton");
	mainMenu:MainMenuClick();
end
--Variable global de la clase (para Luabridge)
MainMenuLua = MainMenu:new()