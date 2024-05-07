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
Entity3 = {
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
Entity4 = {
	Name = "buttonResume",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "50",
                YPos = "50",
                Width = "30",
                Height = "15",
                Texture1 = "Resume_Button.png",
                Texture2 = "ResumeOver_Button.png",
                Texture3 = "ResumeClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuPausa",
			}
        }
	}	
}
Entity5 = {
	Name = "buttonMenu",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonMenu",
				XPos = "50",
                YPos = "70",
                Width = "30",
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
                Script= "MenuPausa",
			}
        }
	}	
}

Entity6 = {
	Name = "buttonExit",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "50",
                YPos = "90",
                Width = "30",
                Height = "15",
                Texture1 = "Exit_Button.png",
                Texture2 = "ExitOver_Button.png",
                Texture3 = "ExitClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuPausa",
			}
        }
	}	
}

Entity7 = {
	Name = "options",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "options",
				XPos = "90",
                YPos = "90",
                Width = "15",
                Height = "15",
                Texture1 = "Settings_Button.png",
                Texture2 = "SettingsOver_Button.png",
                Texture3 = "SettingsClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuPausa",
			}
        }
	}	
}

Entity8 ={
	Name = "Pause_menu",
	Components = {
		{
            Name = "MENU_PAUSA",
            Arguments = {

			}
        }
	}	
}

Entities = { Entity1, Entity2, Entity3,Entity4 ,Entity5 ,Entity6,Entity7,Entity8}

CollisionLayers = {
	Layers = {
		Carretera = "DEFAULT",
		Decoracion = "DEFAULT",
		Edificios = "DEFAULT"
	}
}