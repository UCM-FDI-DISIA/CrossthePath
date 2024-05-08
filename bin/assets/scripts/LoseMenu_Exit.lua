--Definicion de la clase en Lua
LoseMenu_Exit = {}

LoseMenu_Exit.__index = LoseMenu_Exit

--Constructor de la clase en Lua
function LoseMenu_Exit:new()
	local obj={}
	setmetatable(obj, LoseMenu_Exit)
	return obj
end

--Metodo OnButtonClicked
function LoseMenu_Exit:OnButtonClick()
	
end
function LoseMenu_Exit:OnButtonReleased()
	LoseMenu:Exit();
end
--Variable global de la clase (para Luabridge)
LoseMenu_ExitLua = LoseMenu_Exit:new()