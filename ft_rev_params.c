/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:29:14 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/29 16:05:52 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = argc - 1;
		while (s > 0)
		{
			c = 0;
			while (argv[s][c])
			{
				ft_putchar(argv[s][c]);
				c++;
			}
			ft_putchar('\n');
			s--;
		}
	}
	return (0);
}
