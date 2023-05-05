NAME = libft.a

CC				= gcc

SRCS =		ft_bzero.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strlen.c\
			ft_strrchr.c\
			ft_toloweer.c\
			ft_toupper.c\
			ft_memcmp.c


object = $(SRCS:.c=.o)


CFLAGS			= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(object)
	@ar -rc $(NAME) $(object)


clean:
	@rm -f $(object) $(bonusobject)

fclean: clean
	@rm -f $(NAME)

re: fclean all