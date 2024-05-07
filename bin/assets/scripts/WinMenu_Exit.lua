--Definicion de la clase en Lua
WinMenu_Exit = {}

WinMenu_Exit.__index = WinMenu_Exit

--Constructor de la clase en Lua
function WinMenu_Exit:new()
	local obj={}
	setmetatable(obj, WinMenu_Exit)
	return obj
end

--Metodo OnButtonClicked
function WinMenu_Exit:OnButtonClick()
	
end
function WinMenu_Exit:OnButtonReleased()
	WinMenu:Exit();
end
--Variable global de la clase (para Luabridge)
WinMenu_ExitLua = WinMenu_Exit:new()