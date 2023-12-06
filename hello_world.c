#include "ft_printf.h"
#include <stdarg.h>

int forma_type(char i, va_list p)
{
    unsigned int h = 0;

    if (i == '%')
        h += ft_putchar('%');
    else if (i == 'c')
        h += ft_putchar(va_arg(p, int));
    else if (i == 's')
        h += ft_putstr(va_arg(p, char *));
    else if (i == 'd' || i == 'i')
        h += ft_putnbr(va_arg(p, int));
    else if (i == 'u')
        h += ft_putnbr(va_arg(p, unsigned int));
    else if (i == 'x')
        h += ft_puthex(va_arg(p, unsigned int), 1);
    else if (i == 'X')
        h += ft_puthex(va_arg(p, unsigned int), 2);
    else if (i == 'p')
    {
        h += ft_putstr("0x");
        h += ft_puthex(va_arg(p, unsigned long), 1);
    }
    else
        h += ft_putchar(i);
    return (h);
}
int hello_world(const char *fr, ...)
{
    va_list p;
    unsigned int h = 0;
    int i = 0;

    va_start(p, fr);
    if (write(1, "", 0) < 0)
        return (-1);
    while (fr[i] != '\0')
    {
        if (fr[i] == '%' &&  fr[i + 1] != '\0')
            h += forma_type(fr[i++], p);
        else if (fr[i] != '%')
            h += ft_putchar(fr[i]);
        i++;
    }
    va_end(p);
    return (h);
}

