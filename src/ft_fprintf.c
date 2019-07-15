/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:07:25 by mshagga           #+#    #+#             */
/*   Updated: 2019/07/15 13:07:25 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"

/*
 * 1. Need to create a buffer to copy all dat
 */

#include <stdio.h>

int		ft_fprintf(int	fd, va_list va, const char *format)
{
	t_vec	*buff;
	int		i;

	i = 0;
	if (!(buff = ft_vec_init(ft_strlen(format), sizeof(char))))
		return (-1);
	while (format[i])
	{
		if (!ft_vec_add(&buff, (void*)format + i++))
			return (-1);
	}
	write(fd, buff->data, buff->total);
	return (1);
}