/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:07:59 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/28 23:51:12 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[y] != '\0')
	{
		if (x == 0 && (str[y] >= 'a' && str[y] <= 'z'))
		{
			str[y] = str[y] - 32;
			x++;
		}
		else if (x > 0 && (str[y] >= 'A' && str[y] <= 'Z'))
				str[y] = str[y] + 32;
		else if (str[y] < '0' || (str[y] > '9' && str[y] < 'A')
			|| (str[y] > 'Z' && str[y] < 'a') || str[y] > 'z')
				x = 0;
		else
				x++;
				y++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "l JHVJYFb vjhvjVJGVGV :'khbk! [] hvjhv";
	printf("%s", ft_strcapitalize(str));
}
*/
