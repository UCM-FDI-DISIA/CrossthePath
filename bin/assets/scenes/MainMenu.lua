Entity1 = {
	Name = "CameraMenu",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "3|1|0",
				Rotation = "false|0.62|0.0|0.38|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		
		{
			Name = "CAMERA",
			Arguments = {
			}
		},
		{
			Name = "MAIN_MENU",
			Arguments = {
			}
		},
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "MainMenu.mp3",
				Is3D = "false"
			}
	   }
	}
}

Entity21 = {
	Name = "Rana",
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
				Position = "-1.0529091358184814|0.09722249209880829|0",
				Rotation = "false|0.5|0.0|0.5|0.0",
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

Entity2 = {
	Name = "Light",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-0.1690845489501953|5.903861999511719|-5.370077133178711",
				Rotation = "false|0.5|-0.5|0.5|0",
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
				Position = "0.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity4 = {
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
				Position = "0.0|0.0|-2.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity5 = {
	Name = "building_H",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_H"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.0|0.0|-0.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
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
				Position = "-2.0|0.0|-2.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity7 = {
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
				Position = "-2.0|0.0|-4.0",
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
				Position = "0.0|0.0|-4.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity9 = {
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
				Position = "2.0|0.0|-0.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity10 = {
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
				Position = "2.0|0.0|-2.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity11 = {
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
				Position = "2.0|0.0|-4.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity12 = {
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
				Position = "-2.0|0.0|-6.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity13 = {
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
				Position = "-2.0|0.0|-8.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity14 = {
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
				Position = "-2.0|0.0|-10.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity15 = {
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
				Position = "0.0|0.0|-8.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity16 = {
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
				Position = "0.0|0.0|-6.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity17 = {
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
				Position = "0.0|0.0|-10.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity18 = {
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
				Position = "2.0|0.0|-6.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity19 = {
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
				Position = "2.0|0.0|-8.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity20 = {
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
				Position = "2.0|0.0|-10.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity21 = {
	Name = "Rana",
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
				Position = "-1.0529091358184814|0.09722249209880829|0",
				Rotation = "false|0.5|0.0|0.5|0.0",
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

Entity22 = {
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

Entity23 = {
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
				Position = "-2.0|0.0|-12.0",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity24 = {
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
				Position = "0.0|0.0|-12.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity25 = {
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
				Position = "2.0|0.0|-12.0",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity26 = {
	Name = "buttonPlay",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "button",
				XPos = "50",
                YPos = "55",
                Width = "27",
                Height = "27",
                Texture1 = "Play_Button.png",
                Texture2 = "PlayOver_Button.png",
                Texture3 = "PlayClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MainMenu",
			}
        }
	}	
}

Entity27 = {
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
Entity28 = {
	Name = "buttonOptions",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "options",
				XPos = "93",
                YPos = "93",
                Width = "13",
                Height = "12",
                Texture1 = "Settings_Button.png",
                Texture2 = "SettingsOver_Button.png",
                Texture3 = "SettingsClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MainMenu",
			}
        }
	}	
}

Entity29 = {
	Name = "buttonExit",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "50",
                YPos = "80",
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
                Script= "MainMenu",
			}
        }
	}	
}

Entity30 = {
	Name = "title",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "image",
				XPos = "50",
                YPos = "15",
                Width = "95",
                Height = "25",
                Texture = "CrossThePath_Title.png",
                Depth = "2"
			}
		}
	}	
}

Entity31 = {
	Name = "Sounds",
	Components = {
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "GamePlay.mp3",
				Is3D = "false"
			}
		},
		{
			Name = "SOUND_CONTROLLER",
			Arguments = {
               PLAY = "PlaySound.wav",
			   ARROW = "clickArrow.wav",
			   EGG = "Egg.mp3",
			   TROPHY = "Trophy.mp3"
			}
		}
	}	
}

Entity32 = {
	Name = "ScoreText",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "textTest",
				XPos = "15",
                YPos = "80",
                Tam = "7",
                Text = "Best Score: XXX",
                Font = "Buycat.ttf",
                Color = "0|0|0",
                Depth = "1"
			}
		}
	}	
}
Entity33 = {
	Name = "EasterEggsText",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "textTest",
				XPos = "17",
                YPos = "90",
                Tam = "7",
                Text = "EasterEggs: 0/3",
                Font = "Buycat.ttf",
                Color = "0|0|0",
                Depth = "1"
			}
		}
	}	
}
Entity34 = {
	Name = "Egg",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "90",
                YPos = "2",
                Width = "3",
                Height = "3",
                Texture1 = "manin.png",
                Texture2 = "manin.png",
                Texture3 = "manin.png",
                Depth = "1"
			}
		},
		{
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "easterEggs",
			}
        },
		{
			Name = "EASTER_EGGS",
			Arguments = {
				Egg= 0
			}
		}
	}	
}
Entity35 = {
	Name = "Trophy",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "image",
				XPos = "82",
                YPos = "50",
                Width = "35",
                Height = "35",
                Texture = "Trofeo.png",
                Depth = "1"
			}
		}
	}	
}
Entity36 = {
	Name = "level",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "15",
                YPos = "50",
                Width = "15",
                Height = "15",
                Texture1 = "Moon.png",
                Texture2 = "Moon2.png",
                Texture3 = "Moon2.png",
                Depth = "1"
			}
		},
		{
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MainMenu",
			}
        }
	}	
}
Entities = { Entity21, Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, 
Entity7, Entity8, Entity9, Entity10, Entity11, Entity12, Entity13, 
Entity14, Entity15, Entity16, Entity17, Entity18, Entity19, Entity20,
Entity22, Entity23, Entity24, Entity25, Entity26, Entity27,
Entity28, Entity29, Entity30,Entity31,Entity32,Entity33,Entity34,Entity35,
Entity36 }

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}