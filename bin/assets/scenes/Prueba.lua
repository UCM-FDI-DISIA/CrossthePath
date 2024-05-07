Base = {
	Name = "Base",
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
				Position = "0.0|0.0|0.0",
				Rotation = "false|0.707|-0.707|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				AABB = "2.0|2.0|0.1",
				PosOffset = "0|0|0",
				Radius = "2",
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

Player = {
	Name = "Player",
	Components = {
		
	}
}

Camera = {
	Name = "Camera",
	Components = {
		
	}
}


Entities = { Base, Player, Camera}

CollisionLayers = {
	Layers = {
		DEFAULT = "",
		PLAYER = ""
	}
}