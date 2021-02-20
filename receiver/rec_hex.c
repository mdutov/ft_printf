/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:28 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 18:38:55 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "receiver.h"

void			rec_hex(t_list *list)
{
	char				*str;
	int					strlen;
	unsigned int		num;

	num = va_arg(list->ap, unsigned int);
	if (num == 0)
	{
		str = "0";
		list->hex_null = 1;
	}
	else
		str = ft_ultoa_hex(num, list);
	strlen = ft_strlen(str);
	if (list->prec > strlen)
		list->extra_zero = list->prec - strlen;
	remap_flags(strlen, str, list);
	if (list->flag_minus == 1)
		output_minus(list, str);
	else
		output_not_minus(list, str);
	if (list->hex_null == 0)
		free(str);
	list->frt_ptr++;
}
