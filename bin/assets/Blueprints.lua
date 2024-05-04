Cube = {
    Name = "Cube", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "true|0|0|0|0",
                Scale = "1|1|1"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "cube"
            }
        }
    }
}

Frog = {
    Name = "Frog", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|100",
                Rotation = "true|0|0|0|0",
                Scale = "10|10|10"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "Cube.057"
            }
        },
        {
            Name = "CHARACTER_DIE",
            Arguments = {
            }
        },
        {
            Name = "BEHAVIOUR",
            Arguments = {
                Script = "characterDie"
            }
        }
    }
}

enemy = {
    Name = "enemy",
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "true|0|0|0|0",
                Scale = "1|1|1"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "car_taxi"
            }
        },
        {
            Name = "ENEMY_MOVEMENT",
            Arguments = {
                Velocity = "3"
            }
        },
        {
            Name = "RIGIDBODY",
            Arguments = {
                Mass = "0.0",
				AABB = "1.0|1.0|1.0",
				PosOffset = "0|0|0",
				Radius = "0.5",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "PLAYER",
				Bounciness = "0",
				Friction = "0",
				Trigger = "false"
            }

        }
    }
}

enemy2 = {
    Name = "enemy2",
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "true|0|0|0|0",
                Scale = "1|1|1"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "car_police"
            }
        },
        {
            Name = "ENEMY_MOVEMENT",
            Arguments = {
                Velocity = "3"
            }
        },
        {
            Name = "RIGIDBODY",
            Arguments = {
                Mass = "0.0",
				AABB = "1.0|1.0|1.0",
				PosOffset = "0|0|0",
				Radius = "0.5",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "PLAYER",
				Bounciness = "0",
				Friction = "0",
				Trigger = "false"
            }

        }
    }
}

Blueprints = { Cube, Frog, enemy, enemy2 }