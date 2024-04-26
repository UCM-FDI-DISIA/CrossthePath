--Definicion de la clase en Lua
Pausa_Resume = {}

Pausa_Resume.__index = Pausa_Resume

--Constructor de la clase en Lua
function Pausa_Resume:new()
	local obj={}
	setmetatable(obj, Pausa_Resume)
	return obj
end

--Metodo OnButtonClicked
function Pausa_Resume:OnButtonClick()
	print("Estoy encima del boton");
end
function Pausa_Resume:OnButtonReleased()
	print("Estoy encima del boton");
	Pausa:Resume();
end
--Variable global de la clase (para Luabridge)
Pausa_ResumeLua = Pausa_Resume:new()