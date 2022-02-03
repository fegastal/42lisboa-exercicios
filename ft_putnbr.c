/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:08:59 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/29 01:26:41 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, &"-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	a = 48 + nb % 10;
	if (a != 40)
	{
		write(1, &a, 1);
	}
}
