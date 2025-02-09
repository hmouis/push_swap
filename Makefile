NAME = push_swap.a
check = checker.a

SRC = c.n.c index_lst.c   p_to_stack.c  ruls_2.c  sort_small_len_1.c ft_putstr.c lst_length.c push_swap.c   ruls.c    sort_small_len_2.c check_sort.c help_fs.c m_main.c   sort.c    sort_small_n.c

BSRC = b_main.c get_next_line.c get_next_line_utils.c checker.c ft_strstr.c check_sort.c ruls_2.c ruls.c p_to_stack.c push_swap.c c.n.c help_fs.c index_lst.c 

CC = cc
CFLAGS = -Wall -Wextra -Werror
MOBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(MOBJS)
	ar rcs $@ $?

$(check): $(BOBJS)
	ar rcs $@ $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(BOBJS)
	ar rcs $(check) $?

clean:
	rm -f $(MOBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME) $(check)

re: fclean all
