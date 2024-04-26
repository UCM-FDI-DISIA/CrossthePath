--Definicion de la clase en Lua
Pausa_Exit = {}

Pausa_Exit.__index = Pausa_Exit

--Constructor de la clase en Lua
function Pausa_Exit:new()
	local obj={}
	setmetatable(obj, Pausa_Exit)
	return obj
end

--Metodo OnButtonClicked
function Pausa_Exit:OnButtonClick()
	
end
function Pausa_Exit:OnButtonReleased()
	Pausa:Exit();
end
--Variable global de la clase (para Luabridge)
Pausa_ExitLua = Pausa_Exit:new()