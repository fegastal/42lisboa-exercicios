/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:24:26 by fgastal-          #+#    #+#             */
/*   Updated: 2022/02/03 02:58:05 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*m;
	int	i;

	if (min >= max)
		return (0);
	m = (int *)malloc(sizeof(int) * (max - min));
	if (!m)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		m[i] = min + i;
		i++;
	}
	return (m);
}
/*int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
