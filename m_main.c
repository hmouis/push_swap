/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:26:27 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:26:41 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		return (0);
	a = fill_stack_a(av);
	b = NULL;
	if (!a)
	{
		write(2, "Error\n", 6);
		free_lst(&a);
		return (0);
	}
	if (lst_len(a) == 1)
		return (free_lst(&a), 0);
	if (check_sort(a))
		return (free_lst(&a), 0);
	sort(&a, &b);
	free_lst(&a);
	return (0);
}
