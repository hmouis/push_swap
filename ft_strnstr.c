/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:07:58 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/06 21:35:02 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	 ft_strstr(const char *line, const char *rule)
{
	int	i;

	i = 0;
	while (line[i] == rule[i] && line[i] && rule[i])
	{
		i++;
		if (line[i] == '\0' && rule[i] == '\0')
			return(1);
	}
	return (0);
}
