--Definicion de la clase en Lua
LoseMenu_Retry = {}

LoseMenu_Retry.__index = LoseMenu_Retry

--Constructor de la clase en Lua
function LoseMenu_Retry:new()
	local obj={}
	setmetatable(obj, LoseMenu_Retry)
	return obj
end

--Metodo OnButtonClicked
function LoseMenu_Retry:OnButtonClick()
	
end
function LoseMenu_Retry:OnButtonReleased()
	LoseMenu:Retry();
end
--Variable global de la clase (para Luabridge)
LoseMenu_RetryLua = LoseMenu_Retry:new()