/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:38:39 by sboukiou          #+#    #+#             */
/*   Updated: 2025/02/07 09:59:51 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **lst, char c)
{
	if ((*lst)->n > (*lst)->next->n)
	{
		if (c == 'a')
			sa(lst, 1);
		if (c == 'b')
			sb(lst, 1);
	}
}

void	sort_3(t_stack **lst)
{
	t_stack	*last;
	int		test1;
	int		test2;

	last = last_node(*lst);
	test1 = (*lst)->n < (*lst)->next->n;
	test2 = (*lst)->next->n > last->n;
	if (test1 && test2 && last->n > (*lst)->n)
	{
		rra(lst, 1);
		sa(lst, 1);
	}
	else if (!test1 && ((*lst)->n < last->n))
		sa(lst, 1);
	else if (test1 && (*lst)->n > last->n)
		rra(lst, 1);
	else if (!test1 && (*lst)->n > last->n && !test2)
		ra(lst, 1);
	else if (!test1 && test2)
	{
		sa(lst, 1);
		rra(lst, 1);
	}
}

t_stack	*get_min(t_stack *lst)
{
	t_stack	*save;

	if (!lst)
		return (NULL);
	save = NULL;
	while (lst)
	{
		if ((!save || save->n >= lst->n) && lst->index == -1)
		{
			save = lst;
		}
		lst = lst->next;
	}
	return (save);
}

t_stack	*get_max(t_stack *lst)
{
	int		max;
	t_stack	*save;

	while (lst)
	{
		max = lst->n;
		save = lst;
		while (lst)
		{
			if (max >= lst->n)
			{
				lst = lst->next;
				if (!lst)
					return (save);
			}
			else
				break ;
		}
	}
	return (save);
}

int	get_pos(t_stack *a)
{
	t_stack	*min;
	int		i;

	i = 0;
	min = get_min(a);
	while (a)
	{
		i++;
		if (a->n == min->n)
			break ;
		a = a->next;
	}
	return (i);
}

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
