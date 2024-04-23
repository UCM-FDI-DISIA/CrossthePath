--Definicion de la clase en Lua
FinishLineEnemies = {}

FinishLineEnemies.__index = FinishLineEnemies

--Constructor de la clase en Lua
function FinishLineEnemies:new()
	local obj={}
	setmetatable(obj, FinishLineEnemies)
	return obj
end

--Metodo OnCollisionEnter
function FinishLineEnemies:OnCollisionEnter()
	FinishLine:DestroyEntities();
end
--Variable global de la clase (para Luabridge)
FinishLineEnemiesLua = FinishLineEnemies:new()