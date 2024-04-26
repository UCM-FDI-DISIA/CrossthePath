--Definicion de la clase en Lua
FinishLinePlayer = {}

FinishLinePlayer.__index = FinishLinePlayer

--Constructor de la clase en Lua
function FinishLinePlayer:new()
	local obj={}
	setmetatable(obj, FinishLinePlayer)
	return obj
end

--Metodo OnCollisionEnter
function FinishLinePlayer:OnCollisionEnter()
	FinishLine:PlayerWin();
end
--Variable global de la clase (para Luabridge)
FinishLinePlayerLua = FinishLinePlayer:new()