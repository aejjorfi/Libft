
cc = gcc
flags = -Wall -Wextra -Werror

NAME = libft.a

src =	ft_memset.c \
		ft_bzero.c  \
		ft_calloc.c \
		ft_memcpy.c \
		ft_strnstr.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

obj = $(src:.c=.o)

all : $(NAME)

$(NAME) : $(obj)
	$(cc) $(flags) -c $(src) 
	ar rc $(NAME) $(obj)

clean :
	rm -f *.o

fclean :
	rm -f $(NAME)

re : fclean all