/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:23 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 14:16:41 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "receiver.h"

void			rec_char(t_list *list)
{
	char	c;

	list->type = 2;
	c = va_arg(list->ap, int);
	remap_flags(0, 0, list);
	if (list->flag_minus != 1)
	{
		output_width(list, 1);
		list->written += ft_putchar_n(c, 1);
	}
	else
	{
		list->written += ft_putchar_n(c, 1);
		output_width(list, 1);
	}
	list->frt_ptr++;
}
