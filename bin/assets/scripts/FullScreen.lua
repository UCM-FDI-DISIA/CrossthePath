--Definicion de la clase en Lua
FullScreen = {}

FullScreen.__index = FullScreen

--Constructor de la clase en Lua
function FullScreen:new()
	local obj={}
	setmetatable(obj, FullScreen)
	return obj
end

--Metodo OnButtonClicked
function FullScreen:OnButtonClick()
	print("Estoy encima del boton");
end
function FullScreen:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:FullScreen();
end
--Variable global de la clase (para Luabridge)
FullScreenLua = FullScreen:new()