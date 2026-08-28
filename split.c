#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
    int i;
    int j;
    char **dest;
    int d;

    if(!str)
        return(NULL);
    dest = malloc(1024);
    i = 0;
    d = 0;
    while (str[i])
    {
        while (str[i] && str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            i++;
        if(!str[i])
            break;
        dest[d] = malloc(1024);
        j = 0;
        while (str[i] && (str[i] == ' ' && str[i] == '\n' && str[i] == '\t'))
            dest[d][j++] = str[i++];
        dest[d][j] = '\0';
        d++;
    }
    dest[d] = NULL;
    return(dest);
}

int main (int ac, char **av)
{
      char **dest;
        int i = 0;
        dest = ft_split(av[1]);
        while (dest[i] != NULL)
        {
            printf("mot%d = %s\n", i, dest[i]);
            i++;
        }
}