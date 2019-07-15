/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:33:20 by mshagga           #+#    #+#             */
/*   Updated: 2019/07/15 11:33:20 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdlib.h>

int		ft_printf(const char *format, ...)
{
	va_list args;
	int		ret;

	va_start(args, format);
	ret = ft_fprintf(STDOUT_FILE_NO, args, format);
	va_end(args);
	return (ret);
}

int main()
{
	ft_printf("some string\n", 2, 3);
	return (1);
}