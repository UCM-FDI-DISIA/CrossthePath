--Definicion de la clase en Lua
Game_Pause = {}

Game_Pause.__index = Game_Pause

--Constructor de la clase en Lua
function Game_Pause:new()
	local obj={}
	setmetatable(obj, Game_Pause)
	return obj
end

--Metodo OnButtonClicked
function Game_Pause:OnButtonClick()
	print("Estoy encima del boton");
end
function Game_Pause:OnButtonReleased()
	print("Estoy encima del boton");
	Play:Pause();
end
--Variable global de la clase (para Luabridge)
Game_PauseLua = Game_Pause:new()