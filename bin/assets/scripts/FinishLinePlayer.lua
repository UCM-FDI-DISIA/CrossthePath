--Definicion de la clase en Lua
finishLinePlayer = {}

finishLinePlayer.__index = finishLinePlayer

--Constructor de la clase en Lua
function finishLinePlayer:new()
	local obj={}
	setmetatable(obj, finishLinePlayer)
	return obj
end

--Metodo OnCollisionEnter
function collisionTest:OnCollisionEnter()
	FinishLine:PlayerWin();
end
--Variable global de la clase (para Luabridge)
finishLinePlayerLua = finishLinePlayer:new()