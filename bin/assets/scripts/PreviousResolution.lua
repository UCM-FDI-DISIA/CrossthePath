--Definicion de la clase en Lua
PreviousResolution = {}

PreviousResolution.__index = PreviousResolution

--Constructor de la clase en Lua
function PreviousResolution:new()
	local obj={}
	setmetatable(obj, PreviousResolution)
	return obj
end

--Metodo OnButtonClicked
function PreviousResolution:OnButtonClick()
	print("Estoy encima del boton");
end
function PreviousResolution:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:PreviousRes();
end
--Variable global de la clase (para Luabridge)
PreviousResolutionLua = PreviousResolution:new()