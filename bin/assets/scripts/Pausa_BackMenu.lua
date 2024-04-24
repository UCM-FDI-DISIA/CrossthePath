--Definicion de la clase en Lua
Pausa_BackMenu = {}

Pausa_BackMenu.__index = Pausa_BackMenu

--Constructor de la clase en Lua
function Pausa_BackMenu:new()
	local obj={}
	setmetatable(obj, Pausa_BackMenu)
	return obj
end

--Metodo OnButtonClicked
function Pausa_BackMenu:OnButtonClick()
	
end
function Pausa_BackMenu:OnButtonReleased()
	Pausa:BackMenu();
end
--Variable global de la clase (para Luabridge)
Pausa_BackMenuLua = Pausa_BackMenu:new()