# **CROSS THE PATH**
**![](https://lh7-us.googleusercontent.com/tX5_504h3_F3XO2bBb4I-GpfmWqsnwBvUx8hfpOMDvEZBUiHOhhyYCF15okseQXX5RKzXbB8144J1-I3kL35-TPEdAxVXW_lvdpjApnKA584bKBH75zdqeKbcsWIl2WylvOuN1f-xprCBn_oqeYnBRY)**
## 1. Ficha técnica

|               |                                              |
|----------------|-------------------------------|-----------------------------|
|**Título**|Cross the Path|
|**Género**|Acción/Plataforma, endless runner|
|**Target**|Jugadores casuales que quieren jugar para pasar el tiempo|
|**Rating**|PEGI 3|
|**Plataforma**|PC (Windows)|
|**Modo de juego**|Single player|

## 2. Aspectos generales

El objetivo del juego es llegar tan lejos como sea posible sin morir. El jugador, un pequeño robot, deberá avanzar por una carretera mediante las teclas “WASD” para moverse horizontal y verticalmente con un movimiento continuo. Se encontrará con diferentes obstáculos, estáticos y dinámicos, que dificultarán el camino. Algunos de estos obstáculos causarán la muerte del jugador, como los  coches, los trenes o los ríos.

Durante la partida el jugador deberá sortear estos obstáculos con cuidado de no quedarse muy atrás ya que, si la cámara lo sobrepasa, éste morirá igualmente. A lo largo del mapa también nos encontraremos con diferentes power-ups que nos facilitarán nuestra misión de llegar lo más lejos posible.

En pantalla se nos mostrará durante todo el tiempo nuestra puntuación actual que será igual a la distancia recorrida, y se nos dejará saber cuándo hemos sobrepasado nuestro récord anterior.

## 3. Jugabilidad
### 3.1 **Mecánicas**
**Mecánicas del personaje:** el personaje puede moverse en sus ejes horizontal y verticales.

**Mecánicas de entorno:** el entorno cuenta con varios elementos que, a su vez, tienen mecánicas distintas. Estos elementos son:
-   **Cámara:** la cámara sigue un movimiento uniforme intentando mantener al jugador en el centro de la escena cuando se mueve más rápido que ella. Sin embargo, no se detiene si el jugador lo hace, por lo que si este queda rezagado y llega a salirse del espacio de visión por la parte inferior, habrá perdido. La velocidad de movimiento del personaje es mayor que la de la cámara, pudiendo así pararse varias veces para tomar mejor sus decisiones, pero no completamente o perderá.
-   **Obstáculos:** en la escena hay repartidos diversos tipos de obstáculos. Algunos de ellos son dañinos y perjudican al jugador al chocar contra ellos, mientras que otros son inofensivos y su única función es formar parte del atrezo o ser una dificultad añadida al avance del personaje. A su vez, los obstáculos se dividen entre dinámicos y estáticos. Estos son:
    
	-   **Coches y carreteras:** son obstáculos dinámicos que se deben evitar, ya que un choque significa perder la partida. Estos circulan por carriles contiguos entre sí y perpendiculares al avance del personaje.
    
	-   **Ríos y tablones de madera:** su mecánica es inversa a la de la carretera y los coches. En vez de evitar los tablones de madera, el objetivo es saltar sobre ellos para no caer en el río. Este lleva una velocidad de corriente que empuja los tablones. Si el jugador sale por uno de los bordes laterales al subirse a un tablón en movimiento, pierde la partida.
    
	-   **Trenes:** existen vías de ferrocarril por la que circulan trenes con cierta longitud con una mecánica similar a la de la carretera, con la diferencia de que estos avisan con un sonido antes de aparecer por escena.

**Power-Ups:**
El jugador se podrá encontrar con una serie de objetos a medida que avance en la carretera. Estos objetos se obtendrán al chocar con ellos y harán efecto inmediato sobre el jugador durante unos segundos. Habrá 4 power-ups diferentes:

-   **Inmunidad:** El jugador ofrecerá una resistencia absoluta ante cualquier obstáculo
    
-   **Velocidad:** El jugador obtendrá más velocidad en su avance.
    
-   **Reducción de velocidad:** Los elementos dinámicos del juego, a excepción del jugador, sufrirán una disminución en su velocidad de avance. De esta manera, el jugador podrá sortearlos o alcanzarlos con facilidad.
    
-   **Reducción de la velocidad de la cámara:** El avance de la cámara será más lento. Así, el jugador podrá recorrer la carretera con más facilidad y menos presión.
    
**3.2 Controles**
Teclado y ratón:
-   **Navegación por las pantallas de juego:** Puntero y click izquierdo del ratón para presionar los botones.
    
-   **Movimiento del jugador:** “WASD” o mediante las flechas .
    
	- **W**: El jugador avanza hacia delante.
	- **S**: El jugador retrocede hacia atrás.
	- **A**: El jugador se mueve hacia su izquierda.
	- **D**: El jugador se mueve hacia su derecha.

Mando:
-   **Navegación por las pantallas de juego:** Joystick.
-   **Movimiento del jugador:** Joystick.
- **![](https://lh7-us.googleusercontent.com/Vur5VyP4kB-n4nKSXH4lRwYAWzJ2UPQmY8AxziVgtoDaOkb6NCdgohrulSh4NLwC7B1WsH9F1WPI8J_jFi4bEZcGqGThz-othZtxiyN5HokD69N5z0LG9iuevwjAu5nL9Jn_6Y1M3rNXNjfX70t8B2s)**

**3.3 Cámara**

La cámara se enfocará en vista top-down de manera isométrica. Durante la partida tendrá un avance con velocidad constante siguiendo el curso de la carretera del juego.

Si el jugador sobrepasa cierto límite (¾ de la parte visible en cámara de la carretera, por ejemplo) se le aplicará un lerp de seguimiento hasta la posición del jugador.

**3.4 Dinámica**

El objetivo del juego trata de llegar lo más lejos posible en la carretera. Para ello, el jugador deberá esquivar todos los obstáculos posibles y hacer uso de los power-up para facilitar el trayecto. Cuanto más lejos llegue, más score obtendrá.
## 4. Estética
En el apartado estético, el juego recordaría a títulos como *Animal Crossing*, *A Short Hike*, *Polylithic* o el propio *Crossy Road*, con una estética low poly y colores llamativos que cautiven visualmente al jugador, y un protagonista adorable al que mantener vivo todo lo posible.

Para esto, el juego se valdría de modelos con una perspectiva isométrica para que se aprecie el 3d y con colores saturados y alegres para que resulte atractivo para todas las edades.

En cuanto al entorno, tendría elementos del campo y de la ciudad, por ejemplo carreteras donde tendrás que esquivar al tráfico, o ríos que tendrás que atravesar a base de troncos, y una mezcla de árboles, rocas, semáforos o papeleras como obstáculos estáticos.
**![](https://lh7-us.googleusercontent.com/mcv_tQm3QFVk8yPQ2I1uVTp-wsxpCvn6F4czYCWOFc9r-yd47l7lQItyirA2F2So6K5M9ySCwp_OAyJe0TbL-3MGSwhwq8ktP3dlKvlLZGkYP7NywMmeCHBtLsL9dKKhVQ2NldG8-rlxig_OT1bU1fs)**

**![](https://lh7-us.googleusercontent.com/n7_U-DwQWUia3KwpAItrIHaiHoJA3aYR8ARb2lJvY_RT76AHdu2pz142lwVj0G5qQvN5JUUDWCjRWZvqQzNhp3eQa9XO-k_fwyd_bnqOJAyPwo3Q3DlPJvwTpJyTRI_8yuHorIAytRR-pZ1huM-YQZU)**
## 5. Interfaz
### **5.1 Menús y flujo de juego**
El juego comienza con un menú principal que tiene las opciones de salir, jugar y ajustes. El botón de jugar da comienzo a una partida típica, la cual se puede pausar y se muestra el menú de pausa. En este se puede acceder al menú de ajustes, menú principal (perdiendo el progreso) o volver al juego. Si durante el transcurso de una partida el personaje muere, aparece un menú final con la puntuación actual y la mayor puntuación obtenida hasta el momento. De este menú se vuelve al principal.
**![](https://lh7-us.googleusercontent.com/lw3zt9q_Rrp1_rVu7uxl5QgCNahllXlMlVgROR3lbX-FmuNzgGPeXnd-Zr-0jUCQITiEGkStxGUGSI6SQLkpsqAUnTaJWLcBObwE6-YGqN0WTrzz0CgNoGOdCtMII5uNTQCMWyWL6uOQSyC71cmbU-M)**
### **5.2 HUD**
**5.2.1 MAIN MENU**
**![](https://lh7-us.googleusercontent.com/KjviNoBdnybx1aLr8eO1rI2-QPukdHTsE6VBQRiPIkah1UISfrswQBK_IotqmpgmdvhxIxRiqn9JD9OGmtmUCVlhQkW8Zz9pPS5aLWWzwcxpJ_1BVaseOXOFNT0lylu9TLvjuBjExkj38KVHZ4TRtF8)**
**5.2.2 IN GAME**
**![](https://lh7-us.googleusercontent.com/DwbtBRZTb_SHtEjXr6tgtBjiQWEzTzqN3KmPbVQoHFYlDJenD1At900yOeupkoS5qyD5hkUUd1pCd4szCQaABf33yN10B1-U4kHCwI35M-84HegjvHukOysEYAR-isGAJRq6JEUKE0WJTO0jrjCfukM)**
**5.2.3 PAUSE**
**![](https://lh7-us.googleusercontent.com/egVvrygCNc7bCbCW9QZQSQNZaleMM-NRRqxrSsP6S-ErgOD3JUO-598k7hVRzWcpZ8S6duSBwD2i9P_CWWHQaaN0C3fdGCPMObjpXuX_lH-C5NqDeqH07vs272_vrAv12jwmuqlZMJaH4MmhKUINOMg)**
**5.2.4 END MENU**
**![](https://lh7-us.googleusercontent.com/xahP2ruET_zuWJF2P06TkgBHa8Uc0j7kPATGZK-UeHINMnIUseuFuEzzZbTKm_PN82iPtZkQA7nL-aUMS-Iy4p7-4i5dIsTfnjqbVReXKyOgh9A2wd3O4Mds03FSBQL7AK1y1QmQ73aG55OFgrxpcBM)**
**5.2.5 SETTINGS**
**![](https://lh7-us.googleusercontent.com/WH8riaz0VqO1uYQjj95cP4gZdf7E2Ol3oLYDKQ5kb6aTmFtqxoofAksAZ2vFw6PcbIHezSYuK3Fh85i57oG-XeN2bVmRMrm-wa73FLF_GejGedJB8WPer01kd-qD-GFIxGvESPr-XcRuesA7EbBZo2E)**
## 6. Historia
En el universo de Cross the Path, los humanos ya han sido sustituidos por los robots, que forman su propia sociedad y viven en paz con la naturaleza. Sin embargo, nuestro protagonista pertenece a una de las primeras generaciones robóticas, y el gobierno lo considera demasiado anticuado para funcionar, por lo que el pequeño robot tendrá que huir, atravesando campos, ríos y carreteras, e intentar llegar lo más lejos posible para evitar ser despiezado.
**![](https://lh7-us.googleusercontent.com/SdJ3Qz4OtK-ba2WOzjOfsb2qp0ln37YQOpXhYm5U13gGNxnLMtWTDIakwjUewCY-s3e3J0DUCvJVvZwHkfMtuc0Tos_zwIwlxxOfpL3EWqTr36SYREGn2v2qpyuXUhgCbWSImwP_FHqkza1AKEyqRLo)**
## 7. Referencias
- Free vector isometric urban traffic template, designed by macrovector / **Freepik**  [http://www.freepik.com](http://www.freepik.com)

- **Crossy Road** by Hipster Whale [https://poki.com/es/g/crossy-road](https://poki.com/es/g/crossy-road)

- **Animal Crossing** by Nintendo  [https://animalcrossing.nintendo.com/es/](https://animalcrossing.nintendo.com/es/)

- **A Short Hike** by adamgryu  [https://store.steampowered.com/app/1055540/A_Short_Hike/](https://store.steampowered.com/app/1055540/A_Short_Hike/)

- **Polylithic** by polyperfect [https://store.steampowered.com/app/1839060/Polylithic/](https://store.steampowered.com/app/1839060/Polylithic/)

- **Moqups** para la creación de diagramas y demos del juego [https://moqups.com/es/](https://moqups.com/es/)

- Imagen de Logo de **Freepik** [https://www.freepik.es/vector-gratis/fondo-edificios-diseno-isometrico_1074996.htm#query=small%20isometric%20city%20logo&position=5&from_view=search&track=ais&uuid=be173bb9-d4bc-4181-a63e-54b917261586%22%3EFreepik](https://www.freepik.es/vector-gratis/fondo-edificios-diseno-isometrico_1074996.htm#query=small%20isometric%20city%20logo&position=5&from_view=search&track=ais&uuid=be173bb9-d4bc-4181-a63e-54b917261586%22%3EFreepik)
