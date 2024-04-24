--Definicion de la clase en Lua
MainMenu_Exit = {}

MainMenu_Exit.__index = MainMenu_Exit

--Constructor de la clase en Lua
function MainMenu_Exit:new()
	local obj={}
	setmetatable(obj, MainMenu_Exit)
	return obj
end

--Metodo OnButtonClicked
function MainMenu_Exit:OnButtonClick()
	
end
function MainMenu_Exit:OnButtonReleased()
	MainMenu:Exit();
end
--Variable global de la clase (para Luabridge)
MainMenu_ExitLua = MainMenu_Exit:new()