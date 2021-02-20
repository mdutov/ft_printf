/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:43 by maxim             #+#    #+#             */
/*   Updated: 2021/02/05 13:23:32 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "receiver.h"

void			rec_ptr(t_list *list)
{
	char		*str;
	void		*address;

	list->type = 3;
	address = va_arg(list->ap, void *);
	if (!address)
	{
		if (IS_MACOS)
			str = "0x0";
		else
			str = "(nil)";
		list->hex_null = 1;
	}
	ft_strncmp(str, "(nil)", 5) == 0 ? list->prec = 5 : 0;
	ft_strncmp(str, "0x0", 3) == 0 ? list->prec = 3 : 0;
	if (list->hex_null == 0)
		str = ft_ultoa_perc((unsigned long long int)address);
	if (list->width < ((int)ft_strlen(str) - 2))
		list->width = 0;
	if (list->flag_minus != 1)
		output_not_minus(list, str);
	else
		output_minus(list, str);
	if (list->hex_null == 0)
		free(str);
	list->frt_ptr++;
}
