#include "aux.h"

int	borders_v_checker(char *route)
{
	int	fd;
	char	*line;
	int	i;
	int	files;
	int	b;

	i = 1;
	b = 1;
	files = files_map(route);
	if((fd = open(route,O_RDONLY))== -1)
		return(perror("Error al abrir el archivo"),close(fd),-1);
	while ((line = get_next_line(fd))!=NULL)
	{
		if(i == files)
			return(close(fd),b);
		else if(i>1)
		{
			if(line[0]!='1' || line[line_len(line)-1]!='1')
			{
				return(close(fd),0);
			}
		}
		free(line);
		i++;
	}
	return(close(fd),0);
}
