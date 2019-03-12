/*
** my_strlen.c for my_strlen.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
** 
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
** 
** Started on  Fri Nov 13 15:42:43 2015 Erwan Simon
** Last update Fri Nov 13 15:42:45 2015 Erwan Simon
*/

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (*str)
    {
      str = str + 1;
      a = a + 1;
    }
  return (a);
}
