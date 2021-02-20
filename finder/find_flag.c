/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:37 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:34:57 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../general/ft_printf.h"

void	find_flag(t_list *list)
{
	while (*list->frt_ptr == '-' || *list->frt_ptr == '0')
	{
		if (*list->frt_ptr == '-')
		{
			list->frt_ptr++;
			list->flag_minus = 1;
		}
		if (*list->frt_ptr == '0')
		{
			list->frt_ptr++;
			list->flag_zero = 1;
		}
	}
}
