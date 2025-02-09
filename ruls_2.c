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

	if (!a || !*a)
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

	if (!b || !*b)
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
	sa(a, 1);
	sb(b, 1);
	if (check == 1)
		ft_putstr("rr");
}

void	rr(t_stack **a, t_stack **b, int check)
{
	ra(a, 1);
	rb(b, 1);
	if (check == 1)
		ft_putstr("rr");
}

void	rrr(t_stack **a, t_stack **b, int check)
{
	rra(a, 1);
	rrb(b, 1);
	if (check == 1)
		ft_putstr("rrr");
}
