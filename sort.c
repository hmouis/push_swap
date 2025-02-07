/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:25 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/07 11:25:26 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	help_1(t_stack **a, t_stack **b, int min, int max)
{
	int	lst_size;

	lst_size = lst_len(*a);
	pb(a, b);
	rb(b);
	if (max < lst_size)
		max++;
	if (min < max)
		min++;
}

void	help_2(t_stack **a, t_stack **b, int min, int max)
{
	int	lst_size;

	lst_size = lst_len(*a);
	pb(a, b);
	if ((*b)->next && (*b)->n < (*b)->next->n)
		sb(b);
	if (min < max)
		min++;
	if (max < lst_size)
		max++;
}

void	fill_b(t_stack **a, t_stack **b)
{
	int	i;
	int	min;
	int	max;
	int	lst_size;

	min = 0;
	lst_size = lst_len(*a);
	if (lst_size <= 100)
		max = lst_size / 6;
	else
		max = lst_size / 14;
	i = 0;
	index_lst(a);
	while (*a)
	{
		if ((*a)->index < min)
			help_1(a, b, min, max);
		else if ((*a)->index >= min && (*a)->index <= max)
			help_2(a, b, min, max);
		else
			ra(a);
	}
}

void	sort(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*save;
	int		move;
	int		lst_size;
	int		i;
	t_stack	*max;

	if (lst_len(*a) <= 5)
	{
		sort_s_a(a, b, lst_len(*a));
		return ;
	}
	fill_b(a, b);
	lst_size = lst_len(*b);
	save = (*b);
	while (save)
	{
		save = (*b);
		tmp = save;
		max = get_max(*b);
		move = 0;
		while (tmp)
		{
			if (tmp->n == max->n)
				break ;
			move++;
			tmp = tmp->next;
		}
		if (move <= lst_size / 2)
		{
			while (move-- > 0)
				rb(b);
		}
		else
		{
			while (move++ < lst_size)
				rrb(b);
		}
		pa(a, b);
		lst_size--;
	}
}
