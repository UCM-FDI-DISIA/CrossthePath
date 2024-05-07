characterDie = {}

characterDie.__index = characterDie

--Constructor de la clase en Lua
function characterDie:new()
	local obj={}
	setmetatable(obj, characterDie)
	return obj
end

--Metodo OnCollisionEnter
function characterDie:OnCollisionEnter()
	CharacterDie:RunOver();
end

--Variable global de la clase (para Luabridge)
characterDieLua = characterDie:new()