--Definicion de la clase en Lua
DecreaseVolumen = {}

DecreaseVolumen.__index = DecreaseVolumen

--Constructor de la clase en Lua
function DecreaseVolumen:new()
	local obj={}
	setmetatable(obj, DecreaseVolumen)
	return obj
end

--Metodo OnButtonClicked
function DecreaseVolumen:OnButtonClick()
	print("Estoy encima del boton");
end
function DecreaseVolumen:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:DecreaseV();
end
--Variable global de la clase (para Luabridge)
DecreaseVolumenLua = DecreaseVolumen:new()