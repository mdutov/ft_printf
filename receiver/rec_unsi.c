/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_unsi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:52 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 18:49:39 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "receiver.h"

void			rec_unsi(t_list *list)
{
	char	*str;
	int		strlen;

	str = ft_ultoa(va_arg(list->ap, unsigned int));
	strlen = ft_strlen(str);
	if (list->prec > strlen)
		list->extra_zero = list->prec - strlen;
	remap_flags(strlen, str, list);
	if (list->flag_minus != 1)
		output_not_minus(list, str);
	else
		output_minus(list, str);
	free(str);
	list->frt_ptr++;
}
