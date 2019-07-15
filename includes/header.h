/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:48:57 by mshagga           #+#    #+#             */
/*   Updated: 2019/07/15 12:48:57 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_HEADER_H
#define FT_PRINTF_HEADER_H

# include <stdarg.h>
# define STDOUT_FILE_NO 1

int		ft_fprintf(int fd, va_list  va, const char	*format);

#endif
