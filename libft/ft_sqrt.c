/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:05:12 by mshagga           #+#    #+#             */
/*   Updated: 2019/06/27 13:05:12 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int strt;
	unsigned int end;
	unsigned int mid;

	strt = 1;
	end = nb;
	mid = 0;
	if (nb < 0)
		return (0);
	while (mid * mid != (unsigned int)nb)
	{
		mid = (end + strt) / 2;
		if (mid * mid < (unsigned int)nb)
			strt = mid + 1;
		if (mid * mid > (unsigned int)nb)
			end = mid - 1;
		if (strt == end || strt > end || end < strt)
			return (strt * end == (unsigned int)nb ? strt : 0);
	}
	return (mid);
}
