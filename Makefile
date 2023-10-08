NAME := libft.a

SRC := ft_isalpha.c \
	ft_isdigit.c


OBJ = $(SRC:%.c=%.o)
all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o 