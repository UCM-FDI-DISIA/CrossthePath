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
				Position = "0|2.0|0",
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
                Speed= 1.5
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
				Friction = "1",
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
        },
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "footstep.wav",
				Is3D = "false"
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
                Velocity = "6"
            }
        },
        {
            Name = "RIGIDBODY",
            Arguments = {
                Mass = "0.0",
				AABB = "0.7|0.8|0.8",
				PosOffset = "0|0|0",
				Radius = "0.5",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "ENEMIES",
				Bounciness = "0",
				Friction = "1",
				Trigger = "false"
            }
        },
        {
            Name = "PARTICLE_EMITTER",
                Arguments = {
                Loop = "true",
                Time = "10.0",
                Started = "true",
                Name = "Particulas"
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
                Velocity = "6"
            }
        },
        {
            Name = "RIGIDBODY",
            Arguments = {
                Mass = "0.0",
				AABB = "0.7|0.8|0.8",
				PosOffset = "0|0|0",
				Radius = "0.5",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "ENEMIES",
				Bounciness = "0",
				Friction = "1",
				Trigger = "false"
            }
        },
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "true",
				Time = "10.0",
				Started = "true",
				Name = "Particulas"
			}
		}
    }
}

enemyRed = {
    Name = "enemyRed",
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
                Mesh = "car_hatchback"
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
				AABB = "0.7|0.8|0.8",
				PosOffset = "0|0|0",
				Radius = "0.5",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "ENEMIES",
				Bounciness = "0",
				Friction = "1",
				Trigger = "false"
            }
        },
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "true",
				Time = "10.0",
				Started = "true",
				Name = "Particulas"
			}
		}
    }
}

enemyGreen = {
    Name = "enemyGreen",
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
                Mesh = "car_stationwagon"
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
				AABB = "0.7|0.8|0.8",
				PosOffset = "0|0|0",
				Radius = "0.5",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "ENEMIES",
				Bounciness = "0",
				Friction = "1",
				Trigger = "false"
            }
        },
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "true",
				Time = "10.0",
				Started = "true",
				Name = "Particulas"
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
                Position = "1.3|4|-30",
                Rotation = "false|1|-0.4|0.17|0",
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
        },
        {
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "GamePlay.mp3",
				Is3D = "false"
			}
	   }
    }
}
Blueprints = { Cube, Player, enemyTaxi, enemyPolice, enemyRed, enemyGreen, Camera }
