/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freef.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaaban <schaaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 21:32:15 by schaaban          #+#    #+#             */
/*   Updated: 2018/01/23 19:52:22 by schaaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_freef.h"

int		ft_freef(const char *format, ...)
{
	int		i;
	va_list	arg_list;

	i = 0;
	va_start(arg_list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '1')
			ft_memdel((void**)va_arg(arg_list, void**));
		if (format[i] == '2')
			ft_a2ddel((void***)va_arg(arg_list, void***));
		i++;
	}
	va_end(arg_list);
	return (0);
}