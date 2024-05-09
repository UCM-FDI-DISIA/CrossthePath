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
	Name = "Camera1",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.6|3",
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
		},
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "Win.mp3",
				Is3D = "false"
			}
		}
	}
}

Entity3 = {
	Name = "buttonMenu",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "button",
				XPos = "50",
                YPos = "90",
                Width = "15",
                Height = "15",
                Texture1 = "Menu_Button.png",
                Texture2 = "MenuOver_Button.png",
                Texture3 = "MenuClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "WinMenu",
			}
        }
	}	
}

Entity4 = {
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

Entity5 = {
	Name = "buttonExit",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "92",
                YPos = "94",
                Width = "10",
                Height = "6",
                Texture1 = "Exit_Button.png",
                Texture2 = "ExitOver_Button.png",
                Texture3 = "ExitClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "WinMenu",
			}
        }
	}	
}

Entity6 = {
	Name = "Player1",
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
				Position = "-0.0007762163877487183|0.10111222416162491|0.7",
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

Entity7 = {
	Name = "WinText",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "textTest",
				XPos = "50",
                YPos = "10",
                Tam = "25",
                Text = "You Win :D",
                Font = "Buycat.ttf",
                Color = "255|255|0",
                Depth = "1"
			}
		}
	}
}

Entity8 = {
	Name = "Confetti1",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.5|0.6999",
				Rotation = "true|0.0|0.0|0.0|0.0",
				Scale = "5|5|5"
			}
		},
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "true",
				Time = "10.0",
				Started = "true",
				Name = "Confetti"
			}
		}
	}
}

Entity9 = {
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

Entity10 = {
	Name = "pine3.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "pine3"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-3.1150050163269043|0.0|-0.37074485421180725",
				Rotation = "false|0.6081834435462952|-0.6081834435462952|-0.36071163415908813|-0.3607116639614105",
				Scale = "0.3913928270339966|0.3913928270339966|0.3913928270339966"
			}
		}
	}
}

Entity11 = {
	Name = "pine3.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "pine3"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-0.9417237043380737|0.0|-2.1456568241119385",
				Rotation = "false|0.21401646733283997|-0.21401648223400116|-0.6739413142204285|-0.6739413738250732",
				Scale = "0.43559542298316956|0.4355953633785248|0.43559542298316956"
			}
		}
	}
}

Entity12 = {
	Name = "pine2.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "pine2"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "1.7454713582992554|0.0|-0.3125554621219635",
				Rotation = "false|0.6361207365989685|-0.6361207365989685|0.30878862738609314|0.3087886571884155",
				Scale = "0.3071858286857605|0.3071858286857605|0.3071858286857605"
			}
		}
	}
}

Entity13 = {
	Name = "pine2.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "pine2"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.1860451698303223|0.0|-1.5142232179641724",
				Rotation = "false|0.2534017562866211|-0.2534017562866211|-0.6601420640945435|-0.6601420640945435",
				Scale = "0.3071858286857605|0.3071858286857605|0.3071858286857605"
			}
		}
	}
}

Entity14 = {
	Name = "pine1.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "pine1"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.183490753173828|0.0|-2.045942544937134",
				Rotation = "false|-0.2831059694290161|0.2831059694290161|0.6479591131210327|0.6479591131210327",
				Scale = "0.38702499866485596|0.38702499866485596|0.38702499866485596"
			}
		}
	}
}

Entity15 = {
	Name = "pine1.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "pine1"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-2.9389901161193848|0.0|-1.5081101655960083",
				Rotation = "false|-0.2831059694290161|0.2831059694290161|0.6479591131210327|0.6479591131210327",
				Scale = "0.38702499866485596|0.38702499866485596|0.38702499866485596"
			}
		}
	}
}

Entity16 = {
	Name = "oak3.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "oak3"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-1.3561196327209473|0.0|0.7527998685836792",
				Rotation = "false|0.6511799097061157|-0.6511799693107605|-0.27561691403388977|-0.27561691403388977",
				Scale = "0.24245376884937286|0.24245378375053406|0.24245376884937286"
			}
		}
	}
}

Entity17 = {
	Name = "oak2.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "oak2"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.7268905639648438|0.0|-1.2758408784866333",
				Rotation = "false|0.7056174874305725|-0.7056175470352173|-0.045868564397096634|-0.04586856812238693",
				Scale = "0.3770845830440521|0.3770845830440521|0.3770845830440521"
			}
		}
	}
}

Entity18 = {
	Name = "oak2.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "oak2"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "1.1159173250198364|0.0|1.1246451139450073",
				Rotation = "false|0.6631561517715454|-0.6631561517715454|-0.2454056292772293|-0.2454056441783905",
				Scale = "0.3189728558063507|0.3189728558063507|0.3189728558063507"
			}
		}
	}
}

Entity19 = {
	Name = "oak1.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "oak1"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.55203914642334|0.0|0.5154742002487183",
				Rotation = "false|0.6346908807754517|-0.6346908807754517|-0.3117170035839081|-0.3117170035839081",
				Scale = "0.371971070766449|0.371971070766449|0.371971070766449"
			}
		}
	}
}

Entity20 = {
	Name = "oak1",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "oak1"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-0.8032528162002563|0.0|-0.9950047731399536",
				Rotation = "false|0.7007195949554443|-0.7007195949554443|0.09482639282941818|0.09482640027999878",
				Scale = "0.371971070766449|0.371971070766449|0.371971070766449"
			}
		}
	}
}

Entity21 = {
	Name = "building_A.002",
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
				Position = "0.0|0.0|0.02722916752099991",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity22 = {
	Name = "base.026",
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
				Position = "4.0|0.0|-1.9727709293365479",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity23 = {
	Name = "base.025",
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
				Position = "4.0|0.0|0.02722916752099991",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity24 = {
	Name = "base.024",
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
				Position = "2.0|0.0|-1.9727709293365479",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity25 = {
	Name = "base.023",
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
				Position = "0.0|0.0|-1.9727709293365479",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity26 = {
	Name = "base.021",
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
				Position = "-4.0|0.0|0.02722916752099991",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity27 = {
	Name = "base.020",
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
				Position = "-4.0|0.0|-1.9727709293365479",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity28 = {
	Name = "base.019",
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
				Position = "-2.0|0.0|-1.9727709293365479",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity29 = {
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
				Position = "2.0|0.0|0.02722916752099991",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity30 = {
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
				Position = "-2.0|0.0|0.02722916752099991",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity31 = {
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
				Position = "2.0|0.0|2.0251903533935547",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity32 = {
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
				Position = "0.026947859674692154|0.0|2.0251903533935547",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity33 = {
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
				Position = "-1.9599945545196533|0.0|2.0251903533935547",
				Rotation = "false|0.7071067690849304|-0.7071067690849304|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, 
			Entity7, Entity8, Entity9, Entity10, Entity11, Entity12, Entity13, 
			Entity14, Entity15, Entity16, Entity17, Entity18, Entity19, Entity20,
			Entity21, Entity22, Entity23, Entity24, Entity25, Entity26, Entity27,
			Entity28, Entity29, Entity30, Entity31, Entity32, Entity33 }

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}