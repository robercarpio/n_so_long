#include "aux.h"

char	*str_join(char *s1, char *s2)
{
	char	*ptr;
	int		i;
	size_t	r_len;

	r_len = ((line_len(s1) + line_len(s2)) + 1);
	ptr = malloc(r_len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s1)
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}