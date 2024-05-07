Entity1 = {
	Name = "Light",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "4.076245307922363|5.903861999511719|-1.0054539442062378",
				Rotation = "true|0.0|90.0|0.0|0.0",
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

Entity2 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0043773651123046875|0.33414697647094727|2.914267063140869",
				Rotation = "true|0.0|90.0|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		}, 
		{
			Name = "WIN_MENU",
			Arguments = {
			}
		}
	}
}

Entity3 = {
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
				Position = "0.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity4 = {
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
				Position = "-2.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity5 = {
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
				Position = "2.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity6 = {
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
				Position = "2.0|0.0|2.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity7 = {
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
				Position = "-2.0|0.0|2.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity8 = {
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
				Position = "0.0|0.0|2.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity9 = {
	Name = "buttonMenu",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "button",
				XPos = "50",
                YPos = "80",
                Width = "30",
                Height = "30",
                Texture1 = "MENU_Ini.png",
                Texture2 = "MENU_Over.png",
                Texture3 = "MENU_Click.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "WinMenu_Go_To_MainMenu",
			}
        }
	}	
}

Entity10 = {
	Name = "UI_Cursor",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image",
				XPos = "0",
				YPos = "0",
				Width = "5",
				Height = "5",
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

Entity11 = {
	Name = "buttonExit",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "90",
                YPos = "92",
                Width = "20",
                Height = "10",
                Texture1 = "Exit_Button.png",
                Texture2 = "ExitOver_Button.png",
                Texture3 = "ExitClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MainMenu_Exit",
			}
        }
	}	
}

Entity12 = {
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
				Position = "-0.0007762163877487183|0.10111222416162491|0.7495381832122803",
				Rotation = "true|0.0|-0.0|-0.0|0.0",
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
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7, Entity8, Entity9, Entity10, Entity11, Entity12 }

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}