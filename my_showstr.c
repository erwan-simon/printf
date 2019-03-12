/*
** my_showstr.c for my_showstr.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:42:09 2015 Erwan Simon
** Last update Fri Nov 13 15:42:19 2015 Erwan Simon
*/

void my_putchar(char);
int my_putstr(char *);
int	bases(int, char *);

int	my_showstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] < 127 && str[a] > 31)
	  my_putchar(str[a]);
      else
	{
	  my_putchar('\\');
	  if (str[a] <= 7)
	    my_putstr("00");
	  if (str[a] > 7 && str[a]< 63)
	    my_putchar('0');
	  bases(str[a], "01234567");
	}
      a = a + 1;
    }
  return (0);
}
