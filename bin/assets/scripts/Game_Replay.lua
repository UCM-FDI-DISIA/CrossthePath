--Definicion de la clase en Lua
Game_Replay = {}

Game_Replay.__index = Game_Replay

--Constructor de la clase en Lua
function Game_Replay:new()
	local obj={}
	setmetatable(obj, PlayGame)
	return obj
end

--Metodo OnButtonClicked
function Game_Replay:OnButtonClick()
	print("Estoy encima del boton");
end
function Game_Replay:OnButtonReleased()
	print("Has dejado de pulsar para ir al menú\n");
	Play:Replay();
end
--Variable global de la clase (para Luabridge)
Game_ReplayLua = Game_Replay:new()