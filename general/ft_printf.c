/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:48 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 18:52:44 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *frt, ...)
{
	t_list		*list;
	int			written;

	if (!frt)
		return (-1);
	list = (t_list *)ft_malloczero(sizeof(t_list));
	va_start(list->ap, frt);
	list->frt_ptr = frt;
	while (*list->frt_ptr)
	{
		while (*list->frt_ptr != '%' && *list->frt_ptr)
		{
			ft_putchar_fd(*list->frt_ptr, 1);
			list->frt_ptr++;
			list->written++;
		}
		if (*list->frt_ptr == '%')
			format(list);
	}
	written = list->written;
	va_end(list->ap);
	free(list);
	return (written);
}
