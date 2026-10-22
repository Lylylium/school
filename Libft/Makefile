CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

AR = ar rcs

SRC = main.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
	ft_strlen.c	ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c  \
	ft_memmove.c  ft_memcmp.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c
# 	ft_memchr.c ft_strnstr.c ft_calloc.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

f : fclean

.PHONY: all clean fclean re