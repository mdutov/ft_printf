/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:48 by maxim             #+#    #+#             */
/*   Updated: 2021/02/05 10:04:53 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "receiver.h"

void			rec_str(t_list *list)
{
	char		*str;
	int			len;

	str = va_arg(list->ap, char *);
	if (!str)
	{
		str = "(null)";
		if (!IS_MACOS && list->prec >= 0 && list->prec < 6)
			str = "";
	}
	if (list->prec == 0)
		str = "";
	len = (int)ft_strlen(str);
	remap_flags_str(len, str, list);
	if (list->flag_minus != 1)
		output_not_minus(list, str);
	else
		output_minus(list, str);
	list->frt_ptr++;
}
