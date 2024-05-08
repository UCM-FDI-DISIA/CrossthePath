--Definicion de la clase en Lua
LoseMenu_Go_To_MainMenu = {}

LoseMenu_Go_To_MainMenu.__index = LoseMenu_Go_To_MainMenu

--Constructor de la clase en Lua
function LoseMenu_Go_To_MainMenu:new()
	local obj={}
	setmetatable(obj, LoseMenu_Go_To_MainMenu)
	return obj
end

--Metodo OnButtonClicked
function LoseMenu_Go_To_MainMenu:OnButtonClick()
	print("Estoy encima del boton");
end
function LoseMenu_Go_To_MainMenu:OnButtonReleased()
	LoseMenu:Menu();
end
--Variable global de la clase (para Luabridge)
LoseMenu_Go_To_MainMenuLua = LoseMenu_Go_To_MainMenu:new()