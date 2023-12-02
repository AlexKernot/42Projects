NAME=libftprintf.a

CC=cc
CFLAGS=-Wall -Wextra -I./ -I./Print/Printf/includes

OUTPUTFOLDER=binaries/

FILES=	Convert/ft_atoi.c Convert/ft_itoa.c Convert/ft_ltoa.c Convert/ft_uitoa.c\
		Convert/ft_uitox.c Convert/ft_ultoa.c \
		GNL/get_next_line.c GNL/get_next_line_utils.c \
		heap/heap.c \
		int_vector/int_vector_utils.c int_vector/int_vector.c \
		list/ft_lstadd_back_bonus.c list/ft_lstadd_front_bonus.c \
		list/ft_lstclear_bonus.c list/ft_lstdelone_bonus.c list/ft_lstiter_bonus.c \
		list/ft_lstmap_bonus.c list/ft_lstnew_bonus.c list/ft_lstsize_bonus.c \
		Memory/ft_bzero.c Memory/ft_calloc.c Memory/ft_memchr.c Memory/ft_memcmp.c \
		Memory/ft_memcpy.c Memory/ft_memmove.c Memory/ft_memset.c \
		Print/ft_putchar_fd.c Print/ft_putchar.c Print/ft_putendl_fd.c \
		Print/ft_putendl.c Print/ft_putnbr.c Print/ft_putnbr_fd.c Print/ft_putstr.c \
		stack/ft_stack.c string/ft_isalnum.c string/ft_isalpha.c string/ft_isascii.c \
		string/ft_isdigit.c string/ft_isprint.c string/ft_split.c string/ft_strchr.c \
		string/ft_strdup.c string/ft_striteri.c string/ft_strjoin.c string/ft_strlcat.c \
		string/ft_strlcpy.c string/ft_strlen.c string/ft_strmapi.c string/ft_strncmp.c \
		string/ft_strnstr.c string/ft_strrchr.c string/ft_strtrim.c string/ft_substr.c \
		string/ft_tolower.c string/ft_toupper.c
BINARIES=$(FILES:%.c=$(OUTPUTFOLDER)%.o)

BONUS=	ft_lstnew_bonus.c   ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c  ft_lstadd_back_bonus.c  ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c      ft_lstmap_bonus.c
BONUSBINARIES=$(patsubst %.c, $(OUTPUTFOLDER)%.o, $(BONUS))

GNLFILES=GNL/get_next_line_bonus.c GNL/get_next_line_utils_bonus.c
GNLBIN= $(patsubst %.c, $(OUTPUTFOLDER)%.o, $(GNLFILES))

PRINTF= ft_hexadecimal.c ft_integer.c      ft_parse_bonus.c ft_pointer.c \
		ft_print_utils.c ft_printf_bonus.c ft_string.c      ft_ultoa.c
PRINTFILES=$(patsubst %.c, Print/Printf/%.c, $(PRINTF))
PRINTFBIN= $(patsubst %.c, $(OUTPUTFOLDER)%.o, $(PRINTFILES))

all: $(NAME)

$(NAME): $(BINARIES) $(GNLBIN) $(PRINTFBIN)
	@ar -rs $(NAME) $(BINARIES) $(GNLBIN) $(PRINTFBIN)

$(OUTPUTFOLDER)%.o : %.c
	@mkdir -p $(OUTPUTFOLDER)
	@mkdir -p $(OUTPUTFOLDER)/GNL
	@mkdir -p $(OUTPUTFOLDER)/Convert
	@mkdir -p $(OUTPUTFOLDER)/heap
	@mkdir -p $(OUTPUTFOLDER)/int_vector
	@mkdir -p $(OUTPUTFOLDER)/list
	@mkdir -p $(OUTPUTFOLDER)/Memory
	@mkdir -p $(OUTPUTFOLDER)/Print
	@mkdir -p $(OUTPUTFOLDER)/Print/Printf
	@mkdir -p $(OUTPUTFOLDER)/stack
	@mkdir -p $(OUTPUTFOLDER)/string
	@mkdir -p $(OUTPUTFOLDER)/vector
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

.PHONY: clean all fclean bonus re