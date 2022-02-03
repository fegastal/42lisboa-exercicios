 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:17:13 by fgastal-          #+#    #+#             */
/*   Updated: 2022/01/28 11:13:40 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	di;
	unsigned int	si;
	unsigned int	r;

	di = 0;
	si = 0;
	r = 0;
	while (dest[di])
		di++;
	while (src[r])
		r++;
	if (size <= di)
		r += size;
	else
		r += di;
	while ((src[si] != '\0') && ((di + 1) < size))
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (r);
}
