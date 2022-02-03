/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:10:41 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/28 23:49:58 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126 && str[i] != 127)
				i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	int print;
	char y[] = "\n";
	print = ft_str_is_printable(y);
	printf("%d\n", print);
}
*/
