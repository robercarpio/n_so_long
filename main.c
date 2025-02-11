#include "so_long.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

    s_map   map;
    s_player    player;
    (void)map;
    (void)player;
    
    void *mlx = mlx_init();
    mlx_new_window(mlx,100,100,"ventana");
    

    mlx_loop(mlx);

    return(0);
}

//file_to_img guardo assets
//pone un cuadrado mlx_image_to_window
//mlx_clear_window;
//recorro mapa y pongo cuadrado