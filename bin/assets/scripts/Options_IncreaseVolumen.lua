--Definicion de la clase en Lua
Options_IncreaseVolumen = {}

Options_IncreaseVolumen.__index = Options_IncreaseVolumen

--Constructor de la clase en Lua
function Options_IncreaseVolumen:new()
	local obj={}
	setmetatable(obj, Options_IncreaseVolumen)
	return obj
end

--Metodo OnButtonClicked
function Options_IncreaseVolumen:OnButtonClick()
	print("Estoy encima del boton");
end
function Options_IncreaseVolumen:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:IncreaseV();
end
--Variable global de la clase (para Luabridge)
Options_IncreaseVolumenLua = Options_IncreaseVolumen:new()