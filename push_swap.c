/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:24:28 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/07 22:23:37 by hmouis           ###   ########.fr       */
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
			return (NULL);
		i = 0;
		while (av[args][i])
		{
			while (av[args][i] == ' ' && av[args][i])
				i++;
			if (av[args][i] == '\0')
				break ;
			n = ft_atoi(av[args], &i);
			if (n == LONG_MAX || check_number(lst, n))
				return (NULL);
			push_to_lst(&lst, n);
		}
		args++;
	}
	return (lst);
}

int	main(int ac, char **av)
{
	int		i;
	t_stack	*a;
	t_stack	*b;

	i = 1;
	if (ac == 1)
		return (0);
	a = fill_stack_a(av);
	b = NULL;
	if (!a)
	{
		ft_putstr("Error");
		free_lst(&a);
		return (0);
	}
	if (lst_len(a) == 1)
		return (0);
	if (check_sort(a))
		return (0);
	sort(&a, &b);
	return (0);
}
