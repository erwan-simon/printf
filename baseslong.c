/*
** baseslong.c for baseslong.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:38:00 2015 Erwan Simon
** Last update Fri Nov 13 15:38:02 2015 Erwan Simon
*/

void my_putchar(char);
int my_strlen(char *);

int	baseslong(long nb, char *base)
{
  long	result;
  long	div;
  long	len_base;

  div = 1;
  len_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while ((nb / div) >= len_base)
    {
      div = div * len_base;
    }
  while (div > 0)
    {
      result = (nb / div) % len_base;
      my_putchar(base[result]);
      div = div / len_base;
    }
}
