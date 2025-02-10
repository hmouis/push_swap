/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruls_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:15 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:44:07 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int check)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*save;

	if (!a || !*a || lst_len(*a) == 1)
		return ;
	last = last_node(*a);
	first = *a;
	while (*a)
	{
		save = *a;
		*a = (*a)->next;
		if (!(*a)->next)
			break ;
	}
	save->next = NULL;
	(*a) = last;
	(*a)->next = first;
	if (check == 1)
		ft_putstr("rra");
}

void	rrb(t_stack **b, int check)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*save;

	if (!b || !*b || lst_len(*b) == 1)
		return ;
	last = last_node(*b);
	first = *b;
	while (*b)
	{
		save = *b;
		*b = (*b)->next;
		if (!(*b)->next)
			break ;
	}
	save->next = NULL;
	(*b) = last;
	(*b)->next = first;
	if (check == 1)
		ft_putstr("rrb");
}

void	ss(t_stack **a, t_stack **b, int check)
{
	sa(a, check);
	sb(b, check);
	if (check == 1)
		ft_putstr("ss");
}

void	rr(t_stack **a, t_stack **b, int check)
{
	ra(a, check);
	rb(b, check);
	if (check == 1)
		ft_putstr("rr");
}

void	rrr(t_stack **a, t_stack **b, int check)
{
	rra(a, check);
	rrb(b, check);
	if (check == 1)
		ft_putstr("rrr");
}
