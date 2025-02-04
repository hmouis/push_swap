#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>


typedef struct s_stack {
    int n;
    struct s_stack *next;
}t_stack;
    
void push_min(t_stack **a, t_stack **b);
t_stack *get_min(t_stack *lst);
void sort_4(t_stack **a, t_stack **b, char *move);
void sort_5(t_stack **a, t_stack **b, char *move);
void print_lst(t_stack *a);
void sort_2(t_stack **lst, char *move);
void sort_3(t_stack **lst, char *move);
int lst_len(t_stack *lst);
void rr_lst(t_stack **lst, char *move);
void rotate_lst(t_stack **lst, char *move);
void push_b(t_stack **a, t_stack **b);
void push_a(t_stack **a, t_stack **b);
void  add_front(t_stack **a, t_stack **b);
t_stack *last_node(t_stack *lst);
void push_to_lst(t_stack **lst,int n);
void swap(t_stack **lst, char *move);
void add_back(t_stack **lst, t_stack *node);
void free_lst(t_stack **lst);
t_stack *creat_node(int n);
long	check_arg(char *str);
size_t	ft_strlen(const char *s);
long ft_atoi(char *str, int *i);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int check_number(t_stack *lst,int n);




#endif
