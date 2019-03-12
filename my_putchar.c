/*
** my_putchar.c for my_putchar.c in /home/simon_w/System_unix/printf/PSU_2015_my_printf
**
** Made by Erwan Simon
** Login   <simon_w@epitech.net>
**
** Started on  Fri Nov 13 15:39:32 2015 Erwan Simon
** Last update Fri Nov 13 15:39:42 2015 Erwan Simon
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
