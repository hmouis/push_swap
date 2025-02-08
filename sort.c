/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:25 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:40:28 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	help_fill_b(t_stack **a, t_stack **b, int max, int lst_size)
{
	int	min;

	min = 0;
	while (*a)
	{
		if ((*a)->index < min)
		{
			pb(a, b, 1);
			rb(b, 1);
			max += (max < lst_size);
			min += (min < max);
		}
		else if ((*a)->index >= min && (*a)->index <= max)
		{
			pb(a, b, 1);
			if ((*b)->next && (*b)->n < (*b)->next->n)
				sb(b, 1);
			min += (min < max);
			max += (max < lst_size);
		}
		else
			ra(a, 1);
	}
}

void	fill_b(t_stack **a, t_stack **b)
{
	int	min;
	int	max;
	int	lst_size;

	min = 0;
	lst_size = lst_len(*a);
	if (lst_size <= 100)
		max = lst_size / 6;
	else
		max = lst_size / 14;
	index_lst(a);
	help_fill_b(a, b, max, lst_size);
}

int	get_index(t_stack *b)
{
	t_stack	*max;
	int		move;

	move = 0;
	max = get_max(b);
	while (b)
	{
		if (b->n == max->n)
			break ;
		move++;
		b = b->next;
	}
	return (move);
}

void	sort(t_stack **a, t_stack **b)
{
	int	move;
	int	lst_size;

	if (lst_len(*a) <= 5)
		return (sort_s_a(a, b, lst_len(*a)));
	fill_b(a, b);
	lst_size = lst_len(*b);
	while (*b)
	{
		move = get_index(*b);
		if (move <= lst_size / 2)
		{
			while (move-- > 0)
				rb(b, 1);
		}
		else
		{
			while (move++ < lst_size)
				rrb(b, 1);
		}
		pa(a, b, 1);
		lst_size--;
	}
}
