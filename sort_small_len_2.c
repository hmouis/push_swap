/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_len_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:49 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:39:48 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min(t_stack **a, t_stack **b)
{
	int	i;

	i = get_pos(*a);
	if (i == 4 && lst_len(*a) == 4)
	{
		rra(a, 1);
		pb(a, b, 1);
	}
	else if (i == 4 && lst_len(*a) == 5)
	{
		rra(a, 1);
		rra(a, 1);
		pb(a, b, 1);
	}
	else if (i == 5)
	{
		rra(a, 1);
		pb(a, b, 1);
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	i;

	i = get_pos(*a);
	if (i == 1)
		pb(a, b, 1);
	else if (i == 2)
	{
		sa(a, 1);
		pb(a, b, 1);
	}
	else if (i == 3)
	{
		ra(a, 1);
		ra(a, 1);
		pb(a, b, 1);
	}
	else
		push_min(a, b);
	sort_3(a);
	pa(a, b, 1);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	i;

	i = get_pos(*a);
	if (i == 1)
		pb(a, b, 1);
	else if (i == 2)
	{
		sa(a, 1);
		pb(a, b, 1);
	}
	else if (i == 3)
	{
		ra(a, 1);
		ra(a, 1);
		pb(a, b, 1);
	}
	else
		push_min(a, b);
	sort_4(a, b);
	pa(a, b, 1);
}

void	sort_s_a(t_stack **a, t_stack **b, int len)
{
	if (len == 2)
	{
		sort_2(a, 'a');
		return ;
	}
	else if (len == 3)
	{
		sort_3(a);
		return ;
	}
	else if (len == 4)
	{
		sort_4(a, b);
		return ;
	}
	else if (len == 5)
	{
		sort_5(a, b);
		return ;
	}
}
