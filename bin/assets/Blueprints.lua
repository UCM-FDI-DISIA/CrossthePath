Cube = {
    Name = "Cube", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "true|0|0|0|0",
                Scale = "1|1|1"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "cube"
            }
        }
    }
}

Frog = {
    Name = "Frog", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|100",
                Rotation = "true|0|0|0|0",
                Scale = "10|10|10"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "Cube.057"
            }
        }
    }
}

enemy = {
    Name = "enemy",
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "true|0|0|0|0",
                Scale = "1|1|1"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "car_taxi"
            }
        }
    }
}

Blueprints = { Cube, Frog, enemy }