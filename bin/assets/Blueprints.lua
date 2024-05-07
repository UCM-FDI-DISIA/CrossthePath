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


Player = {
	Name = "Player",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Cube.057"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|0.0",
				Rotation = "false|0.0|0.0|1.0|0.0",
				Scale = "0.1|0.1|0.1"
			}
		},
		{
			Name = "ANIMATOR",
			Arguments = {
				AnimNames = "Die|Duck|HitReact|Idle|JumpIdle|JumpLand|JumpStart|No|Punch|Run|Walk|Wave|Weapon|Yes",
				AnimMeshNames = "Frog_Death|Frog_Duck|Frog_HitReact|Frog_Idle|Frog_JumpIdle|Frog_JumpLand|Frog_JumpStart|Frog_No|Frog_Punch|Frog_Run|Frog_Walk|Frog_Wave|Frog_Weapon|Frog_Yes",
				NextAnim = "Idle|Idle|Idle|Idle|JumpLand|Idle|JumpIdle|Idle|Idle|Idle|Idle|Idle|Idle|Idle",
				LoopAnims = "false|false|false|true|false|false|false|false|false|true|true|false|false|false"
			}
		},
		{
			Name = "CHARACTER_MOVEMENT",
			Arguments = {
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "0.46|0.1556|0.2695482373237617",
				PosOffset = "0|0|0",
				Radius = "0.46",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "PLAYER",
				Bounciness = "0",
				Friction = "0",
				Trigger = "false"
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

enemyTaxi = {
    Name = "enemyTaxi",
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
				CollisionLayer = "ENEMIES",
				Bounciness = "0",
				Friction = "0",
				Trigger = "false"
            }

        }
    }
}

enemyPolice = {
    Name = "enemyPolice",
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
				CollisionLayer = "ENEMIES",
				Bounciness = "0",
				Friction = "0",
				Trigger = "false"
            }

        }
    }
}
Camera = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "1.3|4|4",
				Rotation = "false|0.7|-0.4|0.17|0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		},
		{
			Name = "PLAYERCAMERA",
			Arguments = {
			}
		}
	}
}
Blueprints = { Cube, Player, enemyTaxi, enemyPolice, Camera }
