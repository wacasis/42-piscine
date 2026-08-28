#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac == 0)
    {
        write(1,"\n", 1); 
        return(0);
    }
    else if (ac != 2)
    {
        write(1,"a\n", 2);
        return(0);
    }
    while (av[1][i])
    {
        if (av[1][i] == 'a')
        {
            write(1,"a\n", 2);
            return(0);
        }
        i++;      
    }
    write(1,"\n", 1); 
    return(0);
}
