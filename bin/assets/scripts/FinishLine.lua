--Definicion de la clase en Lua
finishLine = {}

finishLine.__index = finishLine

--Constructor de la clase en Lua
function finishLine:new()
	local obj={}
	setmetatable(obj, finishLine)
	return obj
end

--Metodo OnCollisionEnter
function finishLine:OnCollisionEnter()
	FinishLine:CollisionLine();
end
--Variable global de la clase (para Luabridge)
finishLineLua = finishLine:new()