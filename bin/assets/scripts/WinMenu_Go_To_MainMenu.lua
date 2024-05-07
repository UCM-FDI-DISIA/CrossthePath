--Definicion de la clase en Lua
WinMenu_Go_To_MainMenu = {}

WinMenu_Go_To_MainMenu.__index = WinMenu_Go_To_MainMenu

--Constructor de la clase en Lua
function WinMenu_Go_To_MainMenu:new()
	local obj={}
	setmetatable(obj, WinMenu_Go_To_MainMenu)
	return obj
end

--Metodo OnButtonClicked
function WinMenu_Go_To_MainMenu:OnButtonClick()
	print("Estoy encima del boton");
end
function WinMenu_Go_To_MainMenu:OnButtonReleased()
	print("Has dejado de pulsar para ir al menú\n");
	WinMenu:Menu();
end
--Variable global de la clase (para Luabridge)
WinMenu_Go_To_MainMenuLua = WinMenu_Go_To_MainMenu:new()