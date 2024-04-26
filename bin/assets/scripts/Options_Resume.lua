--Definicion de la clase en Lua
Options_Resume = {}

Options_Resume.__index = Options_Resume

--Constructor de la clase en Lua
function Options_Resume:new()
	local obj={}
	setmetatable(obj, Options_Resume)
	return obj
end

--Metodo OnButtonClicked
function Options_Resume:OnButtonClick()
	print("Estoy encima del boton");
end
function Options_Resume:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:GoBack();
end
--Variable global de la clase (para Luabridge)
Options_ResumeLua = Options_Resume:new()