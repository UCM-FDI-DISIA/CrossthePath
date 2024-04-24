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
                YPos = "45",
                Width = "25",
                Height = "10",
                Texture1 = "Resume_Ini.png",
                Texture2 = "Resume_Over.png",
                Texture3 = "Resume_Click.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "Options_Resume",
			}
        }
	}	
}

Entity5 = {
	Name = "fullScreen",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "50",
                YPos = "55",
                Width = "25",
                Height = "10",
                Texture1 = "Resume_Ini.png",
                Texture2 = "Resume_Over.png",
                Texture3 = "Resume_Click.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "Options_FullScreen",
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
                Height = "10",
                Texture1 = "Resume_Ini.png",
                Texture2 = "Resume_Over.png",
                Texture3 = "Resume_Click.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "Options_PreviousResolution",
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
                Height = "10",
                Texture1 = "Resume_Ini.png",
                Texture2 = "Resume_Over.png",
                Texture3 = "Resume_Click.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "Options_NextResolution",
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
                YPos = "65",
                Tam = "10",
                Text = "640x460",
                Font = "",
                Color = "0|0|0",
                Depth = "1"
			}
		}
	}	
}
Entity9 = {
	Name = "volumen",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonResume",
				XPos = "25",
                YPos = "90",
                Width = "15",
                Height = "10",
                Texture1 = "Resume_Ini.png",
                Texture2 = "Resume_Over.png",
                Texture3 = "Resume_Click.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "Options_DecreaseVolumen",
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
                Height = "10",
                Texture1 = "Resume_Ini.png",
                Texture2 = "Resume_Over.png",
                Texture3 = "Resume_Click.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "Options_IncreaseVolumen",
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
                Width = "35",
                Height = "5",
                Texture = "meme.png",
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





Entities = { Entity1, Entity2, Entity3,Entity4,Entity5,Entity6,Entity7,Entity8,Entity9
,Entity10,Entity11, Entity12}

CollisionLayers = {
	Layers = {
		Carretera = "DEFAULT",
		Decoracion = "DEFAULT",
		Edificios = "DEFAULT"
	}
}