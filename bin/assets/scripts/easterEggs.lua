--Definicion de la clase en Lua
easterEggs = {}

easterEggs.__index = easterEggs

--Constructor de la clase en Lua
function easterEggs:new()
	local obj={}
	setmetatable(obj, easterEggs)
	return obj
end

--Metodo OnButtonClicked
function easterEggs:OnButtonClick()
	print("Estoy encima del boton");
end
function easterEggs:OnButtonReleased()
	print("Estoy encima del boton");
	EasterEggs:ClickEasterEggs();
end
--Variable global de la clase (para Luabridge)
easterEggsLua = easterEggs:new()