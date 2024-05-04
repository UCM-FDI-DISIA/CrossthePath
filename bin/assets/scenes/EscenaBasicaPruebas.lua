Entity1 = {
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
				Position = "0.0|1.5976804494857788|-1.7148699760437012",
				Rotation = "false|0.0|0.0|1.0|0.0",
				Scale = "0.10000000149011612|0.10000000149011612|0.10000000149011612"
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
				AABB = "0.4649117588996887|0.15562216937541962|0.269548237323761",
				PosOffset = "0|0|0",
				Radius = "0.4649117588996887",
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

Entity2 = {
	Name = "Light",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-0.05218219757080078|4.880548477172852|-6.341681003570557",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "LIGHT",
			Arguments = {
				LightType = "LT_DIRECTIONAL",
				DiffuseColor = "1.0|1.0|1.0",
				SpecularColor = "0.0|0.0|0.0"
			}
		}
	}
}

Entity3 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "1.5169860124588013|8.30273151397705|3.0",
				Rotation = "false|0.6951308846473694|-0.6951309442520142|0.1295878142118454|0.1295878291130066",
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

Entity4 = {
	Name = "base",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-2.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|2.000000238418579|0.10000056773424149",
				PosOffset = "0|0|0",
				Radius = "2.000000238418579",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity5 = {
	Name = "building_A",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_A"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.0|-0.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|-0.5000000596046448|-0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity6 = {
	Name = "building_B",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_B"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.0|-0.0010188187006860971",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity7 = {
	Name = "building_C",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_C"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.0|-2.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|-0.5|-0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity120 = {
	Name = "UI_win",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "win",
				XPos = "50",
                YPos = "40",
                Width = "75",
                Height = "75",
                Texture = "Win.png",
                Depth = "1"
			}
		}
	}	
}

Entity8 = {
	Name = "building_D",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_D"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.0|-2.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|2.020421028137207|2.9700002670288086",
				PosOffset = "0|0|0",
				Radius = "2.9700002670288086",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity9 = {
	Name = "building_E",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_E"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.0|-4.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|-0.5|-0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739377975464|2.0|2.3499999046325684",
				PosOffset = "0|0|0",
				Radius = "2.3499999046325684",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity10 = {
	Name = "building_F",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_F"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.0|-4.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5000000596046448|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739616394043|2.0|2.3500001430511475",
				PosOffset = "0|0|0",
				Radius = "2.3500001430511475",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity11 = {
	Name = "road_straight",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.06499999761581421|-6.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

EntityCocheIz = {
	Name = "jose_luis_el_coche",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "car_hatchback"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|0.0",
				Rotation = "false|0.0|1.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Name = "Gas",
				Loop = "true",
				Time = "1.0",
				Started = "true"
			}
		},
		{
			Name = "ENEMY_MOVEMENT",
			Arguments = {
				Velocity = "3"
			}
		}
	}
}

EntityCocheDr = {
	Name = "antonio_jesus_el_coche",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "car_police"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.0|0.0",
				Rotation = "false|-4.371138828673793e-08|0.0|0.0|1.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Name = "Gas",
				Loop = "true",
				Time = "1.0",
				Started = "true"
			}
		},
		{
			Name = "ENEMY_MOVEMENT",
			Arguments = {
				Velocity = "5"
			}
		}
	}
}

Entity12 = {
	Name = "base.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.0|-4.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity13 = {
	Name = "base.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|2.000000238418579|0.10000056773424149",
				PosOffset = "0|0|0",
				Radius = "2.000000238418579",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity14 = {
	Name = "road_straight.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.06499999761581421|-6.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity15 = {
	Name = "road_straight.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.06499999761581421|-6.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity16 = {
	Name = "base.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.0|-4.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity17 = {
	Name = "base.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-4.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|2.000000238418579|0.10000056773424149",
				PosOffset = "0|0|0",
				Radius = "2.000000238418579",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity18 = {
	Name = "base.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.0|-2.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity19 = {
	Name = "base.006",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.0|-2.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity20 = {
	Name = "base.007",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity21 = {
	Name = "base.008",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity22 = {
	Name = "road_straight.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.06499999761581421|-6.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity23 = {
	Name = "road_straight.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.06499999761581421|-6.0",
				Rotation = "false|0.49999991059303284|-0.4999999403953552|0.5000000596046448|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity24 = {
	Name = "road_straight.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.06499999761581421|-14.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity25 = {
	Name = "road_straight.006",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.06499999761581421|-14.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity26 = {
	Name = "road_straight.007",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.06499999761581421|-14.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity27 = {
	Name = "road_straight.008",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.06499999761581421|-14.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity28 = {
	Name = "road_straight.009",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "road_straight"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.06499999761581421|-14.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity29 = {
	Name = "building_F.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_F"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.0|-12.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739377975464|2.0|2.3499999046325684",
				PosOffset = "0|0|0",
				Radius = "2.3499999046325684",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity30 = {
	Name = "building_E.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_E"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.0|-12.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|-0.5|-0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739377975464|2.0|2.3499999046325684",
				PosOffset = "0|0|0",
				Radius = "2.3499999046325684",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity31 = {
	Name = "building_D.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_D"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.0|-10.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|2.020421028137207|2.9700005054473877",
				PosOffset = "0|0|0",
				Radius = "2.9700005054473877",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity32 = {
	Name = "building_C.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_C"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.0|-10.0",
				Rotation = "false|0.4999999701976776|-0.5|-0.5|-0.5",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|2.0|2.97662091255188",
				PosOffset = "0|0|0",
				Radius = "2.97662091255188",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Bounciness = "1.0",
				Friction = "0",
				Trigger = "false"
			}
		}
	}
}

Entity33 = {
	Name = "building_B.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_B"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.0|-8.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|0.5|0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity34 = {
	Name = "building_A.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_A"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.0|0.0|-8.0",
				Rotation = "false|0.4999999403953552|-0.4999999701976776|-0.5|-0.5000000596046448",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity35 = {
	Name = "base.009",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.0|-8.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity36 = {
	Name = "base.010",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.0|-8.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity37 = {
	Name = "base.011",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.0|-10.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity38 = {
	Name = "base.012",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.0|-10.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity39 = {
	Name = "base.013",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-12.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity40 = {
	Name = "base.014",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.0|0.0|-12.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity41 = {
	Name = "base.015",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-8.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity42 = {
	Name = "base.016",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.0|0.0|-12.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity43 = {
	Name = "base.017",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "base"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-10.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity44 = {
	Name = "Game_Manager",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "GAME_MANAGER",
			Arguments = {
			}
		}
	}
}
Entity45 = {
	Name = "buttonPause",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonPause",
				XPos = "4",
                YPos = "5",
                Width = "10",
                Height = "10",
				Texture1 = "Pause_Button.png",
                Texture2 = "PauseOver_Button.png",
                Texture3 = "PauseClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "Game_Pause",
			}
        }
	}
}
Entity46 = {
	Name = "UI_Cursor",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image",
				XPos = "0",
				YPos = "0",
				Width = "3",
				Height = "3",
				Texture = "Cursor.png",
				Depth = "10"
			}
		},
		{
			Name = "CURSOR",
			Arguments = {
			}
		}
	}		
}

Entity47 = {
	Name = "UI_Manager",
	Components = {
		{
			Name = "UI_MANAGER",
			Arguments = {
			}
		}
	}
}

Entity48 = {
	Name = "UI_timer",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "textTest",
				XPos = "90",
                YPos = "5",
                Tam = "5",
                Text = "Timer: 0",
                Font = "",
                Color = "1|1|1",
                Depth = "2"
			}
		}
	}	
}

INSTANCIATOR = {
	Name = "Instanciator",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-6.0",
				Rotation = "false|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "INSTANCIATE_ENEMIES",
			Arguments = {
				PrefabName = "enemy",
				SpawnRate = "3.0",
				IsLeft = "true"
			}
		}	
	}
}

INSTANCIATOR2 = {
	Name = "Instanciator2",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-4.0",
				Rotation = "false|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "INSTANCIATE_ENEMIES",
			Arguments = {
				PrefabName = "enemy2",
				SpawnRate = "2.0",
				IsLeft = "false"
			}
		}	
	}
}

Entities = { INSTANCIATOR, INSTANCIATOR2, Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7, 
Entity8, Entity9, Entity10, Entity11, Entity12, Entity13, Entity14, Entity15, 
Entity16, Entity17, Entity18, Entity19, Entity20, Entity21, Entity22, Entity23, 
Entity24, Entity25, Entity26, Entity27, Entity28, Entity29, Entity30, Entity31, 
Entity32, Entity33, Entity34, Entity35, Entity36, Entity37, Entity38, Entity39, 
Entity40, Entity41, Entity42, Entity43, Entity44, Entity45, Entity46, Entity47,
Entity48, EntityCocheIz, EntityCocheDr, Entity120 }

CollisionLayers = {
	Layers = {
		DEFAULT = "",
		ENEMIES = "",
		PLAYER = ""
	}
}