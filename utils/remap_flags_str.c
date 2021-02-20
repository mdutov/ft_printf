/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap_flags_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:20 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 15:28:06 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../general/ft_printf.h"

void	remap_flags_str(int strlen, char *str, t_list *list)
{
	if (list->prec > strlen)
		list->prec = strlen;
	if (list->flag_zero == 1)
		list->flag_zero = 0;
	if (list->width <= (int)ft_strlen(str - list->prec))
		list->width = 0;
}
