#include "so_long.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	char **map;

	map = allocate_map("./maps/map1.ber");
	int width = 28;
    int height = 14;
    int start_x = 1;
    int start_y = 4;

    if (is_exit_reachable(map, start_y, start_x, width, height))
        printf("Salida alcanzable.\n");
    else
        printf("Salida NO alcanzable.\n");
    return 0;
}