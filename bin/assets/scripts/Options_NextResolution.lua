--Definicion de la clase en Lua
Options_NextResolution = {}

Options_NextResolution.__index = Options_NextResolution

--Constructor de la clase en Lua
function Options_NextResolution:new()
	local obj={}
	setmetatable(obj, Options_NextResolution)
	return obj
end

--Metodo OnButtonClicked
function Options_NextResolution:OnButtonClick()
	print("Estoy encima del boton");
end
function Options_NextResolution:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:NextRes();
end
--Variable global de la clase (para Luabridge)
Options_NextResolutionLua = Options_NextResolution:new()