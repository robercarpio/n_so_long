#include "aux.h"
#include <stdio.h>

void	fill_left(char **map, int y, int x)
{
	map[y][x - 1] = 'V';
}

int	main(void)
{
	char *map[] = {
        "111111",
        "1C0001",
        "100P01",
        "1C01E1",
        "111111",
        NULL
	};

	fill_left(map, 1, 3); // Ahora pasamos map sin "&"

	int i = 0;
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	return (0);
}
