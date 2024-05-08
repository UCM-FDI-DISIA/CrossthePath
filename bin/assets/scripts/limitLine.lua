limitLine = {}

limitLine.__index = limitLine

--Constructor de la clase en Lua
function limitLine:new()
	local obj={}
	setmetatable(obj, limitLine)
	return obj
end

--Metodo OnCollisionEnter
function limitLine:OnCollisionEnter()
	LimitLine:CollisionLine();
end

--Variable global de la clase (para Luabridge)
limitLineLua = limitLine:new()