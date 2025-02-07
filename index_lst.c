/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:23:51 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/07 11:23:52 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_lst(t_stack **a)
{
	t_stack	*save;
	t_stack	*tmp;
	t_stack	*min;
	int		i;

	i = 0;
	save = *a;
	while (save)
	{
		tmp = *a;
		min = get_min(*a);
		while (tmp)
		{
			if (tmp->n == min->n)
			{
				tmp->index = i;
				i++;
				break ;
			}
			tmp = tmp->next;
		}
		save = save->next;
	}
}
