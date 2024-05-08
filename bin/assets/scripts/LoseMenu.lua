--Definicion de la clase en Lua
LoseMenu = {}

LoseMenu.__index = LoseMenu

--Constructor de la clase en Lua
function LoseMenu:new()
	local obj={}
	setmetatable(obj, LoseMenu)
	return obj
end

--Metodo OnButtonClicked
function LoseMenu:OnButtonClick()
	print("Estoy encima del boton");
end
function LoseMenu:OnButtonReleased()
	print("Estoy encima del boton");
	loseMenu:LoseMenuClick();
end
--Variable global de la clase (para Luabridge)
LoseMenuLua = LoseMenu:new()