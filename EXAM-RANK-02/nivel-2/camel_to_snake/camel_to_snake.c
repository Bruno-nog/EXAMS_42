#include <unistd.h>
#include <stdlib.h>



int main (int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                write (1, "_", 1);
                av[1][i] += 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}