NAME = libftprintf.a

SRC =  16.c ft_print_c.c ft_printf.c\
	ft_printf_decimal.c ft_printf_unsigned_decimal.c\
	ft_print_pointer.c ft_print_s.c

INCLUDE = ./ft_printf.h

PRINTF = ./libft/*.o

OBJ = ${patsubst %.c,%.o, ${SRC}}

CFLAGS = -Wall -Werror -Wextra

COMPILE = cc $(CFLAGS) -c

LIB = ar rcs $(NAME) $(PRINTF)

REMOVE = rm -f

.PHONY: all clean fclean re

all: $(NAME)

%.o : %.c ${INCLUDE}
	@${COMPILE} $< -o $@ 
	
$(NAME): $(OBJ) $(INCLUDE) Makefile
	cd libft | make | cd ..
	@$(LIB) $?

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

norm:
	norminette

#so:
#	@$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
#	@cc -nostartfiles -shared -o libft.so $(OBJ)
