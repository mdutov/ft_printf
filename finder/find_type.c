/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:27 by maxim             #+#    #+#             */
/*   Updated: 2021/02/05 13:10:59 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../general/ft_printf.h"

void	find_type(t_list *list)
{
	if (*list->frt_ptr == 'c')
		rec_char(list);
	else if (*list->frt_ptr == 'x' || *list->frt_ptr == 'X')
		rec_hex(list);
	else if (*list->frt_ptr == 'd' || *list->frt_ptr == 'i')
	{
		list->type = 1;
		rec_int(list);
	}
	else if (*list->frt_ptr == '%')
		rec_prec(list);
	else if (*list->frt_ptr == 'p')
		rec_ptr(list);
	else if (*list->frt_ptr == 's')
		rec_str(list);
	else if (*list->frt_ptr == 'u')
		rec_unsi(list);
	else
		ft_putstr_fd("error", 1);
}
