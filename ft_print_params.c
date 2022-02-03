/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:06:49 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/29 14:28:35 by fgastal-         ###   ########.fr       */
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
		s = 1;
		while (s < argc)
		{
			c = 0;
			while (argv[s][c])
				c++;
			write(1, argv[s], c);
			ft_putchar('\n');
			s++;
		}
	}
	return (0);
}
