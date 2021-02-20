/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:38:47 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:35:54 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../general/ft_printf.h"

void	find_width(t_list *list)
{
	if (*list->frt_ptr >= '0' && *list->frt_ptr <= '9')
	{
		list->width = 0;
		while (*list->frt_ptr >= '0' && *list->frt_ptr <= '9')
		{
			list->width *= 10;
			list->width += *list->frt_ptr - '0';
			list->frt_ptr++;
		}
	}
	else if (*list->frt_ptr == '*')
	{
		list->frt_ptr++;
		list->width = va_arg(list->ap, int);
		if (list->width < 0)
		{
			list->width *= -1;
			list->flag_minus = 1;
		}
	}
}
