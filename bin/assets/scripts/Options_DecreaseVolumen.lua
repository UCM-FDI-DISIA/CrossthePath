--Definicion de la clase en Lua
Options_DecreaseVolumen = {}

Options_DecreaseVolumen.__index = Options_DecreaseVolumen

--Constructor de la clase en Lua
function Options_DecreaseVolumen:new()
	local obj={}
	setmetatable(obj, Options_DecreaseVolumen)
	return obj
end

--Metodo OnButtonClicked
function Options_DecreaseVolumen:OnButtonClick()
	print("Estoy encima del boton");
end
function Options_DecreaseVolumen:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:DecreaseV();
end
--Variable global de la clase (para Luabridge)
Options_DecreaseVolumenLua = Options_DecreaseVolumen:new()