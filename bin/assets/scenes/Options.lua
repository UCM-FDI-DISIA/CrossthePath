Entity1 = {
	Name = "CameraMenu",
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
                YPos = "45",
                Width = "25",
                Height = "10",
                Texture1 = "Resume_Button.png",
                Texture2 = "ResumeOver_Button.png",
                Texture3 = "ResumeClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuOptions",
			}
        }
	}	
}

Entity5 = {
	Name = "fullScreenOFF",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "50",
                YPos = "55",
                Width = "25",
                Height = "10",
                Texture1 = "Fullscreen_Button.png",
                Texture2 = "FullscreenOver_Button.png",
                Texture3 = "FullscreenClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuOptions",
			}
        }
	}	
}

Entity6 = {
	Name = "resolutions1",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "25",
                YPos = "70",
                Width = "15",
                Height = "15",
				Texture1 = "Play_Button_Reverse.png",
                Texture2 = "PlayOver_Button_Reverse.png",
                Texture3 = "PlayClicked_Button_Reverse.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuOptions",
			}
        }
	}	
}
Entity7 = {
	Name = "resolutions2",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "75",
                YPos = "70",
                Width = "15",
                Height = "15",
				Texture1 = "Play_Button.png",
                Texture2 = "PlayOver_Button.png",
                Texture3 = "PlayClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuOptions",
			}
        }
	}	
}

Entity8 = {
	Name = "resolutionsText",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "textTest",
				XPos = "50",
                YPos = "67",
                Tam = "10",
                Text = "640x460",
                Font = "Buycat.ttf",
                Color = "0|0|0",
                Depth = "1"
			}
		}
	}	
}
Entity9 = {
	Name = "volumen1",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "25",
                YPos = "90",
                Width = "15",
                Height = "15",
				Texture1 = "Play_Button_Reverse.png",
                Texture2 = "PlayOver_Button_Reverse.png",
                Texture3 = "PlayClicked_Button_Reverse.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuOptions",
			}
        }
	}	
}
Entity10 = {
	Name = "volumen2",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "75",
                YPos = "90",
                Width = "15",
                Height = "15",
                Texture1 = "Play_Button.png",
                Texture2 = "PlayOver_Button.png",
                Texture3 = "PlayClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuOptions",
			}
        }
	}	
}
Entity11 = {
	Name = "volumenBar",
	Components = {
		{
			Name = "BAR",
			Arguments = {
                OverlayName= "image",
				XPos = "50",
                YPos = "90",
                Width = "34",
                Height = "5",
                Texture = "Volume_BarFull.png",
                Depth = "3"
			}
		},
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image",
				XPos = "50",
                YPos = "90",
                Width = "35",
                Height = "8",
                Texture = "Volume_Background.png",
                Depth = "2"
			}
		}
	}	
}
Entity12 ={
	Name = "Options_menu",
	Components = {
		{
			Name ="OPCIONES",
			Arguments ={

			}
		}
	}
}
Entity13 = {
	Name = "fullScreenON",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "50",
                YPos = "55",
                Width = "25",
                Height = "10",
                Texture1 = "Windowed_Button.png",
                Texture2 = "WindowedOver_Button.png",
                Texture3 = "WindowedClicked_Button.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "MenuOptions",
			}
        }
	}	
}
Entity14 = {
	Name = "muted",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image1",
				XPos = "50",
                YPos = "90",
                Width = "15",
                Height = "15",
                Texture = "Muted.png",
                Depth = "5"
			}
		}
	}	
}
Entity15 = {
	Name = "Egg",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonExit",
				XPos = "25",
                YPos = "63",
                Width = "15",
                Height = "15",
                Texture1 = "Frog.png",
                Texture2 = "Frog.png",
                Texture3 = "Frog.png",
                Depth = "2"
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
				Egg= 1
			}
		}
	}	
}




Entities = { Entity1, Entity2, Entity3,Entity4,Entity5,Entity6,Entity7,Entity8,Entity9
,Entity10,Entity11, Entity12,Entity13,Entity14,Entity15}

CollisionLayers = {
	Layers = {
		Carretera = "DEFAULT",
		Decoracion = "DEFAULT",
		Edificios = "DEFAULT"
	}
}