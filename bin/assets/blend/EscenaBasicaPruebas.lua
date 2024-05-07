Entity1 = {
	Name = "Player",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Cube"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|1.5976804494857788|-1.7148699760437012",
				Rotation = "false|5.338507591545749e-08|-5.338507946817117e-08|-0.7071067690849304|-0.7071067690849304",
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
				AABB = "4.649118413789296|2.6954826310950124|1.5562219685879057",
				PosOffset = "0|0|0",
				Radius = "0.4649118483066559",
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

Entity2 = {
	Name = "Light",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-0.05218219757080078|4.880548477172852|-6.341681003570557",
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Position = "0.23698599636554718|8.02273178100586|-4.440000057220459",
				Rotation = "false|0.9830635786056519|4.827602206880499e-10|0.1832648366689682|2.5896074173914485e-09",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "GamePlay.mp3",
				Is3D = "false"
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
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
				Rotation = "false|0.7071067094802856|0.0|-0.70710688829422|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|1.6500002145767212|2.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|1.6500002145767212|1.9999998807907104",
				PosOffset = "0|0|0",
				Radius = "1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|-0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|2.97662091255188|1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|2.9700005054473877|2.020420789718628",
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
				Rotation = "false|0.7071067094802856|0.0|-0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739377975464|2.3500001430511475|1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|0.70710688829422|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739616394043|2.3500001430511475|2.0",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|0.09999999403953552|1.9999998807907104",
				PosOffset = "0|0|0",
				Radius = "1.9999998807907104",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|0.10000055283308029|2.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|0.09999999403953552|1.9999998807907104",
				PosOffset = "0|0|0",
				Radius = "1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|0.09999999403953552|1.9999998807907104",
				PosOffset = "0|0|0",
				Radius = "1.9999998807907104",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|0.10000055283308029|2.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
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
				Rotation = "false|0.7071065902709961|0.0|0.7071069478988647|-0.0",
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
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|0.09999999403953552|2.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
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
				Rotation = "false|0.7071067094802856|1.053671194739536e-08|0.7071068286895752|1.0536710171038521e-08",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739377975464|2.3500001430511475|1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|-0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.006739377975464|2.3500001430511475|1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|2.9700005054473877|2.020420789718628",
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
				Rotation = "false|0.7071067094802856|0.0|-0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|2.97662091255188|1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|1.6500002145767212|1.9999998807907104",
				PosOffset = "0|0|0",
				Radius = "1.9999998807907104",
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
				Rotation = "false|0.7071067094802856|0.0|-0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "1.9999998807907104|1.6500002145767212|1.9999998807907104",
				PosOffset = "0|0|0",
				Radius = "1.9999998807907104",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|0.10000055283308029|2.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|0.10000055283308029|2.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
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
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|0.10000055283308029|2.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
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
	Name = "car_taxi",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "car_taxi"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-5.693719863891602",
				Rotation = "false|0.7071067094802856|0.0|-0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "0.418960839509964|0.43447184562683105|0.938072919845581",
				PosOffset = "0|0|0",
				Radius = "0.938072919845581",
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

Entity46 = {
	Name = "car_taxi.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "car_taxi"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-6.32151985168457",
				Rotation = "false|0.7071067094802856|0.0|0.7071068286895752|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "0.418960839509964|0.43447184562683105|0.938072919845581",
				PosOffset = "0|0|0",
				Radius = "0.938072919845581",
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

Entity47 = {
	Name = "Cube",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "cube"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-4.308897495269775",
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "0.3263967037200928|1.0|2.9452381134033203"
			}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7, Entity8, Entity9, Entity10, Entity11, Entity12, Entity13, Entity14, Entity15, Entity16, Entity17, Entity18, Entity19, Entity20, Entity21, Entity22, Entity23, Entity24, Entity25, Entity26, Entity27, Entity28, Entity29, Entity30, Entity31, Entity32, Entity33, Entity34, Entity35, Entity36, Entity37, Entity38, Entity39, Entity40, Entity41, Entity42, Entity43, Entity44, Entity45, Entity46, Entity47 }

CollisionLayers = {
	Layers = {
		DEFAULT = "",
		ENEMIES = "",
		PLAYER = ""
	}
}