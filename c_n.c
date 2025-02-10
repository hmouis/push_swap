/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.n.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:22:50 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/07 11:22:56 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*creat_node(int n)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->n = n;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	add_back(t_stack **lst, t_stack *node)
{
	t_stack	*last;

	if (!lst || !node)
		return ;
	if (*lst)
	{
		last = last_node(*lst);
		last->next = node;
	}
	else
		*lst = node;
}

void	add_front(t_stack **a, t_stack **b)
{
	t_stack	*first;
	t_stack	*save;

	first = *a;
	*a = (*a)->next;
	save = *b;
	*b = first;
	(*b)->next = save;
}

t_stack	*last_node(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	free_lst(t_stack **lst)
{
	t_stack	*save;

	while (*lst)
	{
		save = (*lst)->next;
		free(*lst);
		*lst = save;
	}
}
