--Definicion de la clase en Lua
MenuOptions = {}

MenuOptions.__index = MenuOptions

--Constructor de la clase en Lua
function MenuOptions:new()
	local obj={}
	setmetatable(obj, MenuOptions)
	return obj
end

--Metodo OnButtonClicked
function MenuOptions:OnButtonClick()
	print("Estoy encima del boton");
end
function MenuOptions:OnButtonReleased()
	print("Estoy encima del boton");
	Opciones:MenuOptionsClick();
	
end
--Variable global de la clase (para Luabridge)
MenuOptionsLua = MenuOptions:new()