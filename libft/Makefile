NAME		=	libft.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror 

SRC_DIR		=	libft_srcs
SRCS		=	$(SRC_DIR)/ft_isalpha.c \
				$(SRC_DIR)/ft_isdigit.c \
				$(SRC_DIR)/ft_isalnum.c \
				$(SRC_DIR)/ft_isascii.c \
				$(SRC_DIR)/ft_isprint.c \
				$(SRC_DIR)/ft_strlen.c \
				$(SRC_DIR)/ft_memset.c \
				$(SRC_DIR)/ft_bzero.c \
				$(SRC_DIR)/ft_memcpy.c \
				$(SRC_DIR)/ft_memmove.c \
				$(SRC_DIR)/ft_strlcpy.c \
				$(SRC_DIR)/ft_strlcat.c \
				$(SRC_DIR)/ft_toupper.c \
				$(SRC_DIR)/ft_tolower.c \
				$(SRC_DIR)/ft_strchr.c \
				$(SRC_DIR)/ft_strrchr.c \
				$(SRC_DIR)/ft_strncmp.c \
				$(SRC_DIR)/ft_memchr.c \
				$(SRC_DIR)/ft_memcmp.c \
				$(SRC_DIR)/ft_strnstr.c \
				$(SRC_DIR)/ft_atoi.c \
				$(SRC_DIR)/ft_calloc.c \
				$(SRC_DIR)/ft_strdup.c \
				$(SRC_DIR)/ft_substr.c \
				$(SRC_DIR)/ft_strjoin.c \
				$(SRC_DIR)/ft_strtrim.c \
				$(SRC_DIR)/ft_split.c \
				$(SRC_DIR)/ft_itoa.c \
				$(SRC_DIR)/ft_strmapi.c \
				$(SRC_DIR)/ft_striteri.c \
				$(SRC_DIR)/ft_putchar_fd.c \
				$(SRC_DIR)/ft_putstr_fd.c \
				$(SRC_DIR)/ft_putendl_fd.c \
				$(SRC_DIR)/ft_putnbr_fd.c \
				$(SRC_DIR)/ft_lstadd_front_bonus.c \
				$(SRC_DIR)/ft_lstsize_bonus.c \
				$(SRC_DIR)/ft_lstlast_bonus.c \
				$(SRC_DIR)/ft_lstadd_back_bonus.c \
				$(SRC_DIR)/ft_lstdelone_bonus.c \
				$(SRC_DIR)/ft_lstclear_bonus.c \
				$(SRC_DIR)/ft_lstiter_bonus.c \
				$(SRC_DIR)/ft_lstmap_bonus.c

OBJ_DIR		=	libft_objs
OBJS		=	$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

FT_PRINTF_DIR = ft_printf
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

FT_DPRINTF_DIR = ft_dprintf
FT_DPRINTF_LIB = $(FT_DPRINTF_DIR)/libftdprintf.a

.DEFAULT_GOAL = all

all: $(NAME) ft_printf ft_dprintf

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

ft_printf: $(NAME)
	make -C $(FT_PRINTF_DIR)

ft_dprintf: $(NAME)
	make -C $(FT_DPRINTF_DIR)

clean:
	rm -rf $(OBJ_DIR)
	make -C $(FT_PRINTF_DIR) clean
	make -C $(FT_DPRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(FT_PRINTF_DIR) fclean
	make -C $(FT_DPRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re 