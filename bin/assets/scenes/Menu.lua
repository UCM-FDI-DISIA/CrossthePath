Entity1 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-9.600000381469727|4.0|14.0",
				Rotation = "false|1.0|0|0|0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		}
	}
}

Entity2 = {
	Name = "UI_Button",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "button",
				XPos = "50",
                YPos = "70",
                Width = "30",
                Height = "15",
                Texture1 = "MenuButton_Ini.png",
                Texture2 = "MenuButton_Over.png",
                Texture3 = "MenuButton_Clicked.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MainMenu_Play",
			}
        }
	}	
}

Entity3 = {
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

Entity4 = {
	Name = "UI_Image",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "image",
				XPos = "50",
                YPos = "50",
                Width = "100",
                Height = "100",
                Texture = "MainMenuBackground.png",
                Depth = "1"
			}
		}
	}	
}

Entity5 = {
	Name = "Game_Manager",
	Components = {
		{
			Name = "GAME_MANAGER",
			Arguments = {
			}
		}
	}
}

Entity6 = {
	Name ="Mani_menu",
	Components ={
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
Entity7 = {
	Name = "main_options",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "options",
				XPos = "90",
                YPos = "90",
                Width = "15",
                Height = "15",
                Texture1 = "Options.png",
                Texture2 = "Options.png",
                Texture3 = "Options.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MainMenu_Options",
			}
        }
	}	
}

Entity8 = {
	Name = "buttonExit",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "10",
                YPos = "90",
                Width = "25",
                Height = "20",
                Texture1 = "Exit_Ini.png",
                Texture2 = "Exit_Over.png",
                Texture3 = "Exit_Click.png",
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

Entities = { Entity1, Entity2, Entity3,Entity4,Entity5,Entity6,Entity7,Entity8}

CollisionLayers = {
	Layers = {
		Carretera = "DEFAULT",
		Decoracion = "DEFAULT",
		Edificios = "DEFAULT"
	}
}