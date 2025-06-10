NAME		=	libftprintf.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror 

SRC_DIR		=	ft_printf_srcs
SRCS		=	$(SRC_DIR)/ft_printf.c \
				$(SRC_DIR)/ft_printf_c.c \
				$(SRC_DIR)/ft_printf_d.c \
				$(SRC_DIR)/ft_printf_p.c \
				$(SRC_DIR)/ft_printf_u.c \
				$(SRC_DIR)/ft_printf_s.c \
				$(SRC_DIR)/ft_printf_x.c \
				$(SRC_DIR)/utils_1.c \
				$(SRC_DIR)/utils_2.c

OBJ_DIR		=	ft_printf_objs
OBJS		=	$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

LIBDIR		=	..
LIB			=	libft.a

.DEFAULT_GOAL = all

all: $(NAME)

$(NAME): $(LIBDIR)/$(LIB) $(OBJS)
	cp $(LIBDIR)/$(LIB) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBDIR)/$(LIB):
	make -C $(LIBDIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re $(OBJ_DIR)