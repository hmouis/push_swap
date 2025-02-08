/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_to_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:24:17 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:44:51 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_lst(t_stack **lst, int n)
{
	t_stack	*node;

	node = creat_node(n);
	add_back(lst, node);
}

int	check_number(t_stack *lst, int n)
{
	while (lst)
	{
		if (n == lst->n)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void	pb(t_stack **a, t_stack **b, int check)
{
	if (!a || !*a || !b)
		return ;
	add_front(a, b);
	if (check == 1)
		write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b, int check)
{
	if (!b || !*b || !a)
		return ;
	add_front(b, a);
	if (check == 1)
		write(1, "pa\n", 3);
}
