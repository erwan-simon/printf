/*
** my_put_nbr.c for my_put_nbr.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:41:08 2015 Erwan Simon
** Last update Fri Nov 13 15:41:10 2015 Erwan Simon
*/

void my_putchar(char);
int my_putstr(char*);

int	my_put_nbr(int nb)
{
  int	s_nb;

  s_nb = 1;
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
      return (0);
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while ((nb / s_nb) >= 10)
    {
      s_nb = s_nb * 10;
    }
  while (s_nb > 0)
    {
      my_putchar((nb / s_nb) % 10 + '0');
      s_nb = s_nb / 10;
    }
  return (0);
}
