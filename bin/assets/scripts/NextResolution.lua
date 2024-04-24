--Definicion de la clase en Lua
NextResolution = {}

NextResolution.__index = NextResolution

--Constructor de la clase en Lua
function NextResolution:new()
	local obj={}
	setmetatable(obj, NextResolution)
	return obj
end

--Metodo OnButtonClicked
function NextResolution:OnButtonClick()
	print("Estoy encima del boton");
end
function NextResolution:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:NextRes();
end
--Variable global de la clase (para Luabridge)
NextResolutionLua = NextResolution:new()