#include "so_long.h"
#include <stdio.h>
#include "./print_map/print_map.h"

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

    s_map   map;
    s_player    player;
    s_game  game;

    init_structs(&map,&player,&game);
    print_map(game);
    mlx_loop(game.mlx);
    return(0);
}

//file_to_img guardo assets
//pone un cuadrado mlx_image_to_window
//mlx_clear_window;
//recorro mapa y pongo cuadrado
