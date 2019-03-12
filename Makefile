##
## Makefile for my_printf in /home/simon_w/System_unix/printf/PSU_2015_my_printf
## 
## Made by Erwan Simon
## Login   <simon_w@epitech.net>
## 
## Started on  Fri Nov 13 15:47:56 2015 Erwan Simon
## Last update Fri Nov 13 15:55:22 2015 Erwan Simon
##

CC		= gcc

RM		= rm -f

NAME		= libmy.a

TEST_NAME	= test

SRCS		= my_printf.c \
		  bases.c \
		  baseslong.c \
		  delzer.c \
	          my_putchar.c \
		  my_put_inf.c \
		  my_put_nbr.c \
		  my_putstr.c \
		  my_showstr.c \
		  my_strlen.c

TEST_SRCS	= test.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME) $(TEST_NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

$(TEST_NAME):
		$(CC) -g -o $(TEST_NAME) $(TEST_SRCS) -L. -lmy

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME) $(TEST_NAME)

re:		fclean all

.PHONY:		all clean fclean re
