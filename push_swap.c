/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:24:28 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/07 11:24:30 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_stack	*fill_stack_a(char **av)
{
	int		i;
	long	n;
	t_stack	*lst;
	int		args;

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
			if (n == LONG_MAX)
				return (NULL);
			if (check_number(lst, n))
				return (NULL);
			push_to_lst(&lst, n);
		}
		args++;
	}
	return (lst);
}
void	print_lst(t_stack *a)
{
	while (a)
	{
		printf("%d-->%d\n", a->n, a->index);
		a = a->next;
	}
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
		printf("Error\n");
		free_lst(&a);
		return (0);
	}
	sort(&a, &b);
	return (0);
}
