#include "events.h"

int key_hook(int keycode, s_game *game)
{
    if (keycode == 119 || keycode == 97 || keycode == 115 || keycode == 100)
    {
	game->player.moves++;
	//   printf("Movimientos: %d\n", game->player.moves);
	//printf("can_move: %d\n", can_move(*game,keycode));
	move(game, keycode);
    }
    else if(keycode == 65307)
    {
        mlx_destroy_window(game->mlx,game->window);
        exit(-1);
    }
    return (0);
}