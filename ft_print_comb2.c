/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:46:23 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/22 17:48:20 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	test_if_last(char last[5])
{
	if (!(last[0] == '9' && last[1] == '8'))
	{
		write(1, ", ", 2);
	}
}

void	write_the_digits(char dig[5])
{
	while (dig[0] <= '9')
	{
		while (dig[1] <= '9')
		{
			while (dig[3] <= '9')
			{
				while (dig[4] <= '9')
				{
					write(1, dig, 5);
					test_if_last(dig);
					dig[4]++;
				}
				dig[3]++;
				dig[4] = '0';
			}
			dig[1]++;
			dig[3] = dig[0];
			dig[4] = dig[1] + 1;
		}
		dig[0]++;
		dig[1] = '0';
		dig[3] = dig[0];
		dig[4] = dig[1] + 1;
	}
}

void	ft_print_comb2(void)
{
	char	hakuna[5];

	hakuna[0] = '0';
	hakuna[1] = '0';
	hakuna[2] = ' ';
	hakuna[3] = '0';
	hakuna[4] = '1';
	write_the_digits(hakuna);
}
