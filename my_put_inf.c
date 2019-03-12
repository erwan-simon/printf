/*
** my_put_inf.c for my_put_inf.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:40:36 2015 Erwan Simon
** Last update Fri Nov 13 15:40:38 2015 Erwan Simon
*/

#include "delzer.c"

int my_putstr(char *);

void	my_put_inf(unsigned int nbr)
{
  int	a;
  char	str[11];

  a = 0;
  while (a != 11)
    {
      str[a] = '0';
      a = a + 1;
    }
  a = 11;
  while (a != 0)
    {
      str[a] = nbr % 10 + 48;
      nbr = nbr / 10;
      a = a - 1;
    }
  delzer(str);
  my_putstr(str);
}
