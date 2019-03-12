/*
** my_printf.c for my_printf.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:43:15 2015 Erwan Simon
** Last update Fri Nov 13 15:45:38 2015 Erwan Simon
*/

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "my_putchar.c"
#include "my_putstr.c"
#include "my_strlen.c"
#include "bases.c"
#include "my_showstr.c"
#include "baseslong.c"
#include "my_put_inf.c"
#include "my_put_nbr.c"


void		flag(char a, va_list ap, int b)
{
  if (b % 2 == 1)
    {
      my_putchar(a);
      return;
    }
  if (a == 'c')
    {
      my_putchar(va_arg(ap, int));
      return;
    }
  if (a == 's')
    {
      my_putstr(va_arg(ap, char*));
      return;
    }
  if (a == 'i' || a == 'd')
    {
      my_put_nbr(va_arg(ap, int));
      return;
    }
  if (a == 'u')
    {
      my_put_inf(va_arg(ap, long));
      return;
    }
  if (a == 'X')
    {
      bases(va_arg(ap, int), "0123456789ABCDEF");
      return;
    }
  if (a == 'x')
    {
      bases(va_arg(ap, int), "0123456789abcdef");
      return;
    }
  if (a == 'o')
    {
      bases(va_arg(ap, int), "01234567");
      return;
    }
  if (a == 'b')
    {
      bases(va_arg(ap, int), "01");
      return;
    }
  if (a == 'p')
    {
      my_putstr("0x");
      baseslong(va_arg(ap, long), "0123456789abcdef");
      return;
    }
  if (a == 'S')
    {
      my_showstr(va_arg(ap, char*));
      return;
    }
}

int		cutstr(char *s, int a, int nb)
{
  while (s[a] != '%' && a <= nb)
    {
      my_putchar(s[a]);
      a = a + 1;
    }
  return (a);
}

int		my_printf(char *s, ...)
{
  va_list	ap;
  int		a;
  int		b;
  int		nb;
  char		**array;

  a = 0;
  b = 0;
  va_start(ap, *s);
  nb = my_strlen(s) - 1;
  while (a <= nb)
    {
      a = cutstr(s, a, nb);
      if (s[a] == '%')
	{
	  a = a + 1;
	  b = 0;
	  while (s[a] == '%')
	    {
	      b = b + 1;
	      a = a + 1;
	      if (b % 2 == 1)
		my_putchar('%');
	    }
	  if (s[a] == ' ')
	    {
	      my_putchar(' ');
	      a = a + 1;
	    }
	  flag(s[a], ap, b);
	  if (s[a] != 'c' && s[a] != 's' && s[a] != 'i' && s[a] != 'd' && s[a] != 'u' && s[a] != 'X' && s[a] != 'x' && s[a] != 'o' && s[a] != 'p' && s[a] != 'S' && s[a] != 'u' && s[a] != 'S' && s[a] != 'b')
            a = a - 1;
	}
      a = a + 1;
    }
  va_end(ap);
}
