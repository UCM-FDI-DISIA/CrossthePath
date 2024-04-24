--Definicion de la clase en Lua
IncreaseVolumen = {}

IncreaseVolumen.__index = IncreaseVolumen

--Constructor de la clase en Lua
function IncreaseVolumen:new()
	local obj={}
	setmetatable(obj, IncreaseVolumen)
	return obj
end

--Metodo OnButtonClicked
function IncreaseVolumen:OnButtonClick()
	print("Estoy encima del boton");
end
function IncreaseVolumen:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:IncreaseV();
end
--Variable global de la clase (para Luabridge)
IncreaseVolumenLua = IncreaseVolumen:new()