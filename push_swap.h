/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:24:53 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:41:57 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				n;
	int				index;
	struct s_stack	*next;
}					t_stack;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int					do_instructions(t_stack **a, t_stack **b);
int					check_rule(char *line, t_stack **a, t_stack **b);
int					ft_strstr(const char *line, const char *rule);
char				*ft_strchr(char *s, char c);
char				*ft_strchr(char *s, char c);
size_t				ft_strlen(char *s);
char				*ft_strjoin(char *s1, char *s2);
char				*get_next_line(int fd);
char				*ft_strcpy_nl(char *line, char *str);
char				*check_after_nl(char **str);
char				*fill_str(char *str, int fd);
char				*get_line(char *str, char *after_newline);
char				*ft_strcpy(char *str, char *after_newline);
t_stack				*fill_stack_a(char **av);
int					check_sort(t_stack *a);
int					get_index(t_stack *b);
void				rrr(t_stack **a, t_stack **b, int check);
void				sort_s_a(t_stack **a, t_stack **b, int len);
int					get_pos(t_stack *a);
void				sort(t_stack **a, t_stack **b);
void				fill_b(t_stack **a, t_stack **b);
void				index_lst(t_stack **a);
void				rr(t_stack **a, t_stack **b, int check);
t_stack				*get_max(t_stack *lst);
void				ss(t_stack **a, t_stack **b, int ckeck);
void				ft_putstr(char *s);
void				push_min(t_stack **a, t_stack **b);
t_stack				*get_min(t_stack *lst);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);
void				print_lst(t_stack *a);
void				sort_2(t_stack **lst, char c);
void				sort_3(t_stack **lst);
int					lst_len(t_stack *lst);
void				rra(t_stack **a, int check);
void				rrb(t_stack **b, int check);
void				ra(t_stack **a, int check);
void				rb(t_stack **b, int check);
void				pb(t_stack **a, t_stack **b, int check);
void				pa(t_stack **a, t_stack **b, int check);
void				add_front(t_stack **a, t_stack **b);
t_stack				*last_node(t_stack *lst);
void				push_to_lst(t_stack **lst, int n);
void				sa(t_stack **a, int check);
void				sb(t_stack **b, int check);
void				add_back(t_stack **lst, t_stack *node);
void				free_lst(t_stack **lst);
t_stack				*creat_node(int n);
long				check_arg(char *str);
long				ft_atoi(char *str, long *i);
void				ft_putnbr(int n);
void				ft_putchar(char c);
int					check_number(t_stack *lst, int n);

#endif
