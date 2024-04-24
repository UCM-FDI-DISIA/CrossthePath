--Definicion de la clase en Lua
Options_PreviousResolution = {}

Options_PreviousResolution.__index = Options_PreviousResolution

--Constructor de la clase en Lua
function Options_PreviousResolution:new()
	local obj={}
	setmetatable(obj, Options_PreviousResolution)
	return obj
end

--Metodo OnButtonClicked
function Options_PreviousResolution:OnButtonClick()
	print("Estoy encima del boton");
end
function Options_PreviousResolution:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:PreviousRes();
end
--Variable global de la clase (para Luabridge)
Options_PreviousResolutionLua = Options_PreviousResolution:new()