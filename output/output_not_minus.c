/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_not_minus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:48:56 by maxim             #+#    #+#             */
/*   Updated: 2021/02/05 11:00:17 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "output.h"

void	output_not_minus(t_list *list, char *str)
{
	if (list->prec >= 0)
	{
		if (list->flag_zero == 1 && list->minus == 1 && list->width > 0)
		{
			list->minus = 0;
			list->written += ft_putchar_n('-', 1);
		}
		output_width(list, list->prec);
		list->minus == 1 ? list->written += ft_putchar_n('-', 1) : 0;
		list->written += ft_putchar_n('0', list->extra_zero);
		output_precision(list, str, list->prec);
	}
	else
	{
		if (list->flag_zero == 1 && list->minus == 1 && list->width > 0)
		{
			list->minus = 0;
			list->written += ft_putchar_n('-', 1);
		}
		output_width(list, (int)ft_strlen(str));
		list->minus == 1 ? list->written += ft_putchar_n('-', 1) : 0;
		ft_putstr_fd(str, 1);
		list->written += ft_strlen(str);
	}
}
