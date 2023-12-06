#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int hello_world(const char *fr, ...);
int ft_putchar(int c);
int ft_puthex(unsigned long n, int type);
int ft_putnbr(long n);
int ft_putstr(char *s);

#endif