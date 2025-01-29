#ifndef AUX_H
# define AUX_H

#include <stdlib.h>
#include <fcntl.h>
#include "../gnl/get_next_line.h"

int   files_map(char *route);
int	line_len(char *str);
int	only_chars_allowed(char *str, char *allow);
int	borders_h_checker(char *route);
int	borders_v_checker(char *route);
void consume_remaining(int fd, int *is_rect);
#endif
