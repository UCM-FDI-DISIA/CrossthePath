--Definicion de la clase en Lua
Pausa_Options = {}

Pausa_Options.__index = Pausa_Options

--Constructor de la clase en Lua
function Pausa_Options:new()
	local obj={}
	setmetatable(obj, Pausa_Options)
	return obj
end

--Metodo OnButtonClicked
function Pausa_Options:OnButtonClick()
	print("Estoy encima del boton");
end
function Pausa_Options:OnButtonReleased()
	print("Estoy encima del boton");
	Pausa:GoToOptions();
end
--Variable global de la clase (para Luabridge)
Pausa_OptionsLua = Pausa_Options:new()