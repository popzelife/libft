/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 15:35:03 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/11 15:44:34 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Quake 3's Fast Inverse Square Root

#include "libft.h"

float		ft_invsqrt(float x)
{
	int		i;
	float	xhalf;

	xhalf = 0.5f * x;
	i = *(int*)&x;
	i = 0x5f3759df - (i >> 1);
	x = *(float*)&i;
	x = x * (1.5f - xhalf * x * x);
	x = x * (1.5f - (xhalf * x * x));
	return (x);
}

float		ft_sqrt(float x)
{
	return (1.0 / ft_invsqrt(x));
}
