#include "ft_printf.h"

int ft_putnbr(long n)
{
    unsigned int h = 0;

    if (n < 0)
    {
        write(1, "-", 1);
        return(ft_putnbr(-n) + 1); 
    }
    else if (n >= 10)
    {
        h += ft_putnbr(n / 10);
        h += ft_putnbr(n % 10);
    }
    else if (n < 10)
    {
        h += ft_putchar(n + 48);
    }
    return (h);
}