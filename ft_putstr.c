#include "ft_printf.h"

int ft_putstr(char *s)
{
    unsigned int i = 0;

    if (!s)
    {
        write(1, "(null)", 6);
        return(6);
    }
    while (s[i] != '\0')
    {
        ft_putchar(s[i]);
        i++;
    }
    return(i);
}