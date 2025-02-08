/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:24:28 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 15:09:29 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_stack_a(char **av)
{
	t_stack	*lst;

	long (n), (args), (i);
	i = 0;
	lst = NULL;
	args = 1;
	while (av[args])
	{
		if (check_arg(av[args]) == LONG_MAX)
			return (free_lst(&lst), NULL);
		i = 0;
		while (av[args][i])
		{
			while (av[args][i] == ' ' && av[args][i])
				i++;
			if (av[args][i] == '\0')
				break ;
			n = ft_atoi(av[args], &i);
			if (n == LONG_MAX || check_number(lst, n))
				return (free_lst(&lst), NULL);
			push_to_lst(&lst, n);
		}
		args++;
	}
	return (lst);
}


