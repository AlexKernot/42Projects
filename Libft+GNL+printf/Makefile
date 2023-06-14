NAME=libftprintf.a

CC=cc
CFLAGS=-Wall -Wextra -Werror -I./ -I./Printf/includes

OUTPUTFOLDER=binaries/

FILES=	ft_isalpha.c    ft_isdigit.c  ft_isalnum.c    ft_isascii.c   \
		ft_isprint.c    ft_strlen.c   ft_memset.c     ft_bzero.c     \
		ft_memcpy.c     ft_memmove.c  ft_strlcpy.c    ft_strlcat.c   \
		ft_toupper.c    ft_tolower.c  ft_strchr.c     ft_strrchr.c   \
		ft_strncmp.c    ft_memchr.c   ft_memcmp.c     ft_strnstr.c   \
		ft_atoi.c       ft_calloc.c   ft_strdup.c     ft_substr.c    \
		ft_strjoin.c    ft_strtrim.c  ft_split.c      ft_itoa.c      \
		ft_strmapi.c    ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c
BINARIES=$(FILES:%.c=$(OUTPUTFOLDER)%.o)

BONUS=	ft_lstnew_bonus.c   ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c  ft_lstadd_back_bonus.c  ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c      ft_lstmap_bonus.c
BONUSBINARIES=$(patsubst %.c, $(OUTPUTFOLDER)%.o, $(BONUS))

GNLFILES=GNL/get_next_line_bonus.c GNL/get_next_line_utils_bonus.c
GNLBIN= $(patsubst %.c, $(OUTPUTFOLDER)%.o, $(GNLFILES))

PRINTF= ft_hexadecimal.c ft_integer.c      ft_parse_bonus.c ft_pointer.c \
		ft_print_utils.c ft_printf_bonus.c ft_string.c      ft_ultoa.c
PRINTFILES=$(patsubst %.c, Printf/%.c, $(PRINTF))
PRINTFBIN= $(patsubst %.c, $(OUTPUTFOLDER)%.o, $(PRINTFILES))

all: $(NAME)

$(NAME): $(BINARIES) $(GNLBIN) $(PRINTFBIN)
	@ar -rs $(NAME) $(BINARIES) $(GNLBIN) $(PRINTFBIN)

$(OUTPUTFOLDER)%.o : %.c
	@mkdir -p $(OUTPUTFOLDER)
	@mkdir -p $(OUTPUTFOLDER)/Printf
	@mkdir -p $(OUTPUTFOLDER)/GNL
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(BINARIES) $(BONUSBINARIES) $(PRINTFBIN) $(GNLBIN)
	-@rm -fd $(OUTPUTFOLDER)/Printf
	-@rm -fd $(OUTPUTFOLDER)/GNL
	-@rm -fd $(OUTPUTFOLDER)
fclean: clean
	@rm -f $(NAME)
bonus: $(NAME) $(BONUSBINARIES)
	@ar -rs $(NAME) $(BONUSBINARIES)
	@echo "libft Finished."
re: fclean all

.PHONY: clean all $(NAME) fclean bonus re