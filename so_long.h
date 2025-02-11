#ifndef SO_LONG_H
# define SO_LONG_H

# include <X11/Xlib.h>
#include "./aux/aux.h"
#include "./process_map/process_map.h"
#include "./print_map/print_map.h"
#include "./minilibx-linux/mlx.h"
#include "./minilibx-linux/mlx_int.h"
#include "gnl/get_next_line.h"

typedef struct w_data {
	void	*mlx;
	void	*win;
} w_data;

typedef struct s_map {
	int	n_collectibles;
	int	size_x;
	int	size_y;
	s_player player;
	char	**alloc;
} s_map;

typedef struct s_player {
	int	py;
	int	px;
	int	moves;
	int	collectibles_taken;
} s_player;

#endif
