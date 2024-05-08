enemyActivator = {}

enemyActivator.__index = enemyActivator

--Constructor de la clase en Lua
function enemyActivator:new()
	local obj={}
	setmetatable(obj, enemyActivator)
	return obj
end

--Metodo OnCollisionEnter
function enemyActivator:OnCollisionEnter()
	EnemyActivator:CollisionLine();
end

--Variable global de la clase (para Luabridge)
enemyActivatorLua = enemyActivator:new()