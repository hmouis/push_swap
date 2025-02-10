NAME = push_swap
check = checker

SRC= index_lst.c push_swap.c  sort_small_len_1.c  lst_length.c  sort_small_len_2.c check_sort.c ruls_2.c c_n.c  m_main.c  ruls.c ft_putstr.c help_fs.c p_to_stack.c  sort.c

BSRC = b_main.c get_next_line.c get_next_line_utils.c checker.c ft_strstr.c check_sort.c ruls_2.c ruls.c p_to_stack.c push_swap.c c_n.c help_fs.c ft_putstr.c index_lst.c lst_length.c sort_small_len_1.c 

CC = cc
CFLAGS = -Wall -Wextra -Werror
MOBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)


all: $(NAME)

bonus: $(check)

$(NAME): $(MOBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(check): $(BOBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MOBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME) $(check)

re: fclean all
