/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_len_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:25:37 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:38:36 by hmouis           ###   ########.fr       */
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
