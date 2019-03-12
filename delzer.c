/*
** delzer.c for delzer.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:38:22 2015 Erwan Simon
** Last update Fri Nov 13 15:39:05 2015 Erwan Simon
*/

int my_strlen(char *);

char	*delzer(char *str)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 1;
  c = my_strlen(str);
  while (str[0] == 48)
    {
      while (b != c)
	{
	  str[a] = str[b];
	  a = a + 1;
	  b = b + 1;
	}
      a = 0;
      b = 1;
      str[c - 1] = '\0';
      c = c - 1;
    }
  return (str);
}
