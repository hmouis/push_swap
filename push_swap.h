/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:24:53 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/07 11:24:54 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				n;
	int				index;
	struct s_stack	*next;
}					t_stack;

void	help_1(t_stack **a, t_stack **b, int min, int max);
void	help_2(t_stack **a, t_stack **b, int min, int max);
void				rrr(t_stack **a, t_stack **b);
void				sort_s_a(t_stack **a, t_stack **b, int len);
int					get_pos(t_stack *a);
void				sort(t_stack **a, t_stack **b);
void				fill_b(t_stack **a, t_stack **b);
void				index_lst(t_stack **a);
void				rr(t_stack **a, t_stack **b);
t_stack				*get_max(t_stack *lst);
void				ss(t_stack **a, t_stack **b);
void				ft_putstr(char *s);
void				push_min(t_stack **a, t_stack **b);
t_stack				*get_min(t_stack *lst);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);
void				print_lst(t_stack *a);
void				sort_2(t_stack **lst, char c);
void				sort_3(t_stack **lst);
int					lst_len(t_stack *lst);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				add_front(t_stack **a, t_stack **b);
t_stack				*last_node(t_stack *lst);
void				push_to_lst(t_stack **lst, int n);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				add_back(t_stack **lst, t_stack *node);
void				free_lst(t_stack **lst);
t_stack				*creat_node(int n);
long				check_arg(char *str);
size_t				ft_strlen(const char *s);
long				ft_atoi(char *str, int *i);
void				ft_putnbr(int n);
void				ft_putchar(char c);
int					check_number(t_stack *lst, int n);

#endif
