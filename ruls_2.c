/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruls_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:15 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/07 11:25:16 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*save;
	int		i;

	if (!a || !*a)
		return ;
	i = 0;
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
	ft_putstr("rra");
}

void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*save;
	int		i;

	if (!b || !*b)
		return ;
	i = 0;
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
	ft_putstr("rrb");
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
	ft_putstr("rr");
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	ft_putstr("rr");
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	ft_putstr("rrr");
}
