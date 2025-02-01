#include "aux.h"

char *dup_line(char *s)
{
    char *str;
    int i;

    str = malloc((line_len(s) + 1));
    if (str == NULL)
        return (NULL);

    i = 0;
    while (s[i] != '\0')
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
