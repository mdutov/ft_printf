/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:14 by maxim             #+#    #+#             */
/*   Updated: 2021/02/05 13:11:14 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../general/ft_printf.h"

void	find_precision(t_list *list)
{
	if (*list->frt_ptr == '.')
	{
		list->frt_ptr++;
		if (*list->frt_ptr >= '0' && *list->frt_ptr <= '9')
		{
			list->prec = 0;
			while (*list->frt_ptr >= '0' && *list->frt_ptr <= '9')
			{
				list->prec *= 10;
				list->prec += *list->frt_ptr - '0';
				list->frt_ptr++;
			}
		}
		else if (*list->frt_ptr == '*')
		{
			list->frt_ptr++;
			list->prec = va_arg(list->ap, int);
		}
		else
			list->prec = 0;
	}
}
