#include "ft_printf.h"

int ft_puthex(unsigned long n, int type)
{
    unsigned int h = 0;
    char *p = "0123456789abcdef";
    char *s = "0123456789ABCDEF";

    if (n >= 16)
    {
        h += ft_puthex(n / 16, type);
        h += ft_puthex(n % 16, type);
    }
    else if (n < 16)
    {
        if (type == 1)
            h += ft_putchar(p[n]);
        else if (type == 2)
            h += ft_putchar(s[n]); 
    }
    return (h);
}