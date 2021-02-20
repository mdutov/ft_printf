/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:06:49 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:44:09 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "output.h"

void	output_width(t_list *list, int len)
{
	while (list->width != 0 && list->width > len)
	{
		if (list->flag_zero != 1)
		{
			list->written++;
			ft_putchar_fd(' ', 1);
		}
		else
		{
			list->written++;
			ft_putchar_fd('0', 1);
		}
		list->width--;
	}
}
