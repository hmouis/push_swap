/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:27:07 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:49:47 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		return (1);
	a = fill_stack_a(av);
	b = NULL;
	if (!a || !do_instructions(&a, &b))
	{
		write(2, "Error\n", 6);
		return (free_lst(&a), 1);
	}
	if (check_sort(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_lst(&a);
	return (0);
}
