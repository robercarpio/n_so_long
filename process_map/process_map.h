#ifndef PROCESS_MAP_H
# define PROCESS_MAP_H

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "../gnl/get_next_line.h"
#include "../aux/aux.h"

void consume_remaining(int fd, int *is_rect);
int is_rectangle(char *route);
int	is_exit_reachable(char **grid, int y, int x, int width, int height);

#endif