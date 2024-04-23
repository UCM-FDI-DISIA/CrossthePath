--Definicion de la clase en Lua
finishLineEnemies = {}

finishLineEnemies.__index = finishLineEnemies

--Constructor de la clase en Lua
function finishLineEnemies:new()
	local obj={}
	setmetatable(obj, finishLineEnemies)
	return obj
end

--Metodo OnCollisionEnter
function collisionTest:OnCollisionEnter()
	FinishLine:DestroyEntities();
end
--Variable global de la clase (para Luabridge)
finishLineEnemiesLua = finishLineEnemies:new()