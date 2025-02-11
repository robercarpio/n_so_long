#include "so_long.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

    s_map   map;
    s_player    player;
    s_game  game;
    char    **a_map;
    a_map= allocate_map("./maps/map1.ber");

    player.px = pos_x(a_map);
    player.py = pos_y(a_map);
    player.moves = 0;
    player.collectibles_taken = 0;

    map.n_collectibles = collectible_count(a_map);
    map.size_x = line_len(a_map[0]);
    map.size_y = map_height(a_map);
    map.player = player;
    map.alloc = a_map;

    game.mlx = mlx_init();
    game.player = player;
    game.map = map;
    game.pixels = 64;
    game.floor = mlx_xpm_file_to_image(game.mlx,"./textures/floor.xpm",&game.pixels,&game.pixels);
    game.window = mlx_new_window(game.mlx,600,600,"ventana");

    mlx_put_image_to_window(game.mlx,game.window,game.floor,0,0);

    mlx_loop(game.mlx);


    (void)game;

    return(0);
}

//file_to_img guardo assets
//pone un cuadrado mlx_image_to_window
//mlx_clear_window;
//recorro mapa y pongo cuadrado