#include "aux.h"

int	ft_contains(char *str, char c)
{
	while (*str)
	{
		if(*str == c)
			return(1);
		str++;
	}
	return(0);
}