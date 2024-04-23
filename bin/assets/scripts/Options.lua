--Definicion de la clase en Lua
Options = {}

Options.__index = Options

--Constructor de la clase en Lua
function Options:new()
	local obj={}
	setmetatable(obj, Options)
	return obj
end

--Metodo OnButtonClicked
function Options:OnButtonClick()
	print("Estoy encima del boton");
end
function Options:OnButtonReleased()
	print("Estoy encima del boton");
	Pausa:GoToOptions();
end
--Variable global de la clase (para Luabridge)
OptionsLua = Options:new()