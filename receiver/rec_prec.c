/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_prec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:38 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 14:16:41 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "receiver.h"

void			rec_prec(t_list *list)
{
	if (IS_MACOS)
	{
		remap_flags(0, 0, list);
		if (list->flag_minus == 1)
		{
			list->written += ft_putchar_n('%', 1);
			output_width(list, 1);
		}
		else
		{
			output_width(list, 1);
			list->written += ft_putchar_n('%', 1);
		}
	}
	else
		list->written += ft_putchar_n('%', 1);
	list->frt_ptr++;
}
