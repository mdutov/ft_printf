/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:20 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 15:28:15 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../general/ft_printf.h"

void	remap_flags(int strlen, char *str, t_list *list)
{
	if (list->prec > -1 && *str != '0' && list->prec < strlen)
		list->prec = strlen;
	if ((list->flag_zero == 1 && list->flag_minus == 1 && list->type == 3)
	|| (list->flag_zero == 1 && list->type == 2))
		list->flag_zero = 0;
	if (list->prec >= 0 && list->flag_zero == 1)
		list->flag_zero = 0;
	if (list->flag_minus == 1 && list->flag_zero == 1)
		list->flag_zero = 0;
	if ((list->type == 2 || list->type == 3) && list->width <= 1)
		list->width = 0;
	if (list->type == 1 && *str != '0' && list->width == strlen)
		list->width = 0;
}
