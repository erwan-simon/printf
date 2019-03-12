/*
** my_putstr.c for my_putstr.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:40:02 2015 Erwan Simon
** Last update Fri Nov 13 15:40:05 2015 Erwan Simon
*/

void my_putchar(char);

int	my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str = str + 1;
    }
}
