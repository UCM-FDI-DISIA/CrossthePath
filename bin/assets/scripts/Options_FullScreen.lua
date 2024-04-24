--Definicion de la clase en Lua
Options_FullScreen = {}

Options_FullScreen.__index = Options_FullScreen

--Constructor de la clase en Lua
function Options_FullScreen:new()
	local obj={}
	setmetatable(obj, Options_FullScreen)
	return obj
end

--Metodo OnButtonClicked
function Options_FullScreen:OnButtonClick()
	print("Estoy encima del boton");
end
function Options_FullScreen:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:FullScreen();
end
--Variable global de la clase (para Luabridge)
Options_FullScreenLua = Options_FullScreen:new()