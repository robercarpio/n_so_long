#ifndef EVENTS_H
# define EVENTS_H

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "../aux/aux.h"
#include "../so_long.h"
#include "../minilibx-linux/mlx.h"
#include "../print_map/print_map.h"

//can_move;
//move;

int key_hook(int keycode, s_game *game);
int   can_move(s_game game, int c);
void  move(s_game *game, int keycode);

#endif