/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 05:51:16 by fgastal-          #+#    #+#             */
/*   Updated: 2022/02/02 19:00:34 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) Value < 0 ? -Value: Value

#endif
/////////////////////////////////////
// 
// #include <stdio.h>
// 
// #include "ft_abs.h"
// 
// int	main(void)
// {
// 	int	i;
// 
// 	i = -2;
// 	while (i <= 2)
// 	{
// 		printf("\n");
// 		printf("abs(%d) = %d\n", i, ABS(i));
// 		printf("\n");
// 		i++;
// 	}
// }
