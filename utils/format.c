/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:32 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:47:10 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../general/ft_printf.h"

static void		reset_flags(t_list *list)
{
	list->flag_minus = 0;
	list->flag_zero = 0;
	list->extra_zero = 0;
	list->minus = 0;
	list->width = 0;
	list->prec = -1;
	list->type = -1;
	list->hex_null = 0;
}

void			format(t_list *list)
{
	list->frt_ptr++;
	reset_flags(list);
	find_flag(list);
	find_width(list);
	find_precision(list);
	find_type(list);
}
