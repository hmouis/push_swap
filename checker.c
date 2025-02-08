/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@1337.ma>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:02:05 by hmouis            #+#    #+#             */
/*   Updated: 2025/02/08 16:46:06 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_rule(char *line, t_stack **a, t_stack **b)
{
	if (ft_strstr(line, "sa\n"))
		sa(a, 0);
	else if (ft_strstr(line, "sb\n"))
		sb(b, 0);
	else if (ft_strstr(line, "ss\n"))
		ss(a, b, 0);
	else if (ft_strstr(line, "pa\n"))
		pa(a, b, 0);
	else if (ft_strstr(line, "pb\n"))
		pb(a, b, 0);
	else if (ft_strstr(line, "ra\n"))
		ra(a, 0);
	else if (ft_strstr(line, "rb\n"))
		rb(b, 0);
	else if (ft_strstr(line, "rr\n"))
		rr(a, b, 0);
	else if (ft_strstr(line, "rra\n"))
		rra(a, 0);
	else if (ft_strstr(line, "rrb\n"))
		rrb(b, 0);
	else if (ft_strstr(line, "rrr\n"))
		rrr(a, b, 0);
	else
		return (0);
	return (1);
}

int	do_instructions(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{	
		if (!line || !check_rule(line, a, b))
			return (free_lst(a), 0);
		line = get_next_line(0);
	}
	return (1);
}


