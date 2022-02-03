/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:02:18 by fgastal-          #+#    #+#             */
/*   Updated: 2022/02/03 07:25:28 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*new_struct;
	int			i;

	new_struct = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!new_struct)
		return (0);
	i = 0;
	while (i < ac)
	{
		new_struct[i].size = ft_strlen(av[i]);
		new_struct[i].str = (char *)malloc(ft_strlen(av[i]) + 1);
		ft_strcpy(new_struct[i].str, av[i]);
		new_struct[i].copy = (char *)malloc(ft_strlen(av[i]) + 1);
		ft_strcpy(new_struct[i].copy, av[i]);
		i++;
	}
	new_struct[i].str = NULL;
	return (new_struct);
}
