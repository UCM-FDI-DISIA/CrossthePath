--Definicion de la clase en Lua
WinMenu = {}

WinMenu.__index = WinMenu

--Constructor de la clase en Lua
function WinMenu:new()
	local obj={}
	setmetatable(obj, WinMenu)
	return obj
end

--Metodo OnButtonClicked
function WinMenu:OnButtonClick()
	print("Estoy encima del boton");
end
function WinMenu:OnButtonReleased()
	print("Estoy encima del boton");
	winMenu:WinMenuClick();
end
--Variable global de la clase (para Luabridge)
WinMenuLua = WinMenu:new()