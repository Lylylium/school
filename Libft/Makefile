CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRC = main.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
	ft_strlen.c	ft_memset.c ft_bzero.c ft_memcpy.c 
	ft_strlcpy 
# 	ft_memmove.c 

OBJ = $(SRC:.c=.o)

NAME = libft.a

	

$(NAME) : $(OBJ)
	$(AR) $@ $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

f : fclean

.PHONY: all clean fclean re