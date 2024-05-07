--Definicion de la clase en Lua
MenuPausa = {}

MenuPausa.__index = MenuPausa

--Constructor de la clase en Lua
function MenuPausa:new()
	local obj={}
	setmetatable(obj, MenuPausa)
	return obj
end

--Metodo OnButtonClicked
function MenuPausa:OnButtonClick()
	print("Estoy encima del boton");
end
function MenuPausa:OnButtonReleased()
	print("Estoy encima del boton");
	Pausa:MenuPausaClick();
end
--Variable global de la clase (para Luabridge)
MenuPausaLua = MenuPausa:new()