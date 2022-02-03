/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:15:42 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/29 05:24:52 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	count;
	int	i;
	int	res;

	res = 0;
	count = 0;
	i = 0;
	while (whitespace(str[i]) == 1)
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (count % 2 == 1)
		res = res * -1;
	return (res);
}

/*#include <stdio.h>

int	ft_atoi(char *str);

int main ()
{
	char str[] = " -+++ -n55484  ---+--+1234ab567";

	printf("%i", ft_atoi(str));
	return (0);
}*/
