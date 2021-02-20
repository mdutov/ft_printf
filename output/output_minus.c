/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_minus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:06:27 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:43:23 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "output.h"

void	output_minus(t_list *list, char *str)
{
	if (list->prec >= 0)
	{
		list->minus == 1 ? list->written += ft_putchar_n('-', 1) : 0;
		list->written += ft_putchar_n('0', list->extra_zero);
		output_precision(list, str, list->prec);
		output_width(list, list->prec);
	}
	else
	{
		list->minus == 1 ? list->written += ft_putchar_n('-', 1) : 0;
		ft_putstr_fd(str, 1);
		output_width(list, ft_strlen(str));
		list->written += ft_strlen(str);
	}
}
