/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruls.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:07 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:44:34 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, int check)
{
	t_stack	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	second = (*a)->next;
	(*a)->next = second->next;
	second->next = (*a);
	(*a) = second;
	if (check == 1)
		ft_putstr("sa");
}

void	sb(t_stack **b, int check)
{
	t_stack	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	second = (*b)->next;
	(*b)->next = second->next;
	second->next = (*b);
	(*b) = second;
	if (check == 1)
		ft_putstr("sb");
}

void	ra(t_stack **a, int check)
{
	t_stack	*first;

	if (!a || !*a)
		return ;
	first = *a;
	*a = (*a)->next;
	add_back(a, first);
	first->next = NULL;
	if (check == 1)
		ft_putstr("ra");
}

void	rb(t_stack **b, int check)
{
	t_stack	*first;

	if (!b || !*b)
		return ;
	first = *b;
	*b = (*b)->next;
	add_back(b, first);
	first->next = NULL;
	if (check == 1)
		ft_putstr("rb");
}
