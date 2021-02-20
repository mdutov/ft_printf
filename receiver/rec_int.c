/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:33 by maxim             #+#    #+#             */
/*   Updated: 2021/02/05 11:46:57 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "receiver.h"

static	int		check_minus(int nbr, t_list *list)
{
	if (nbr < 0)
	{
		if (nbr == MIN)
		{
			list->minus = 0;
		}
		else
		{
			list->minus = 1;
			nbr = nbr * -1;
			list->width -= 1;
		}
	}
	return (nbr);
}

void			output_min_zero(t_list *list, char *str, int k)
{
	list->written += ft_putchar_n('-', 1);
	list->written += ft_putchar_n('0', k);
	output_precision(list, str + 1, 10);
}

void			rec_int(t_list *list)
{
	int		nbr;
	int		len;
	char	*str;
	int		k;

	k = 0;
	nbr = va_arg(list->ap, int);
	nbr = check_minus(nbr, list);
	str = ft_itoa(nbr);
	len = (int)ft_strlen(str);
	if (list->width > len)
		k = list->width - len;
	if (list->prec > len)
		list->extra_zero = list->prec - len;
	remap_flags(len, str, list);
	if (list->flag_minus == 0 && nbr == MIN && list->flag_zero == 1 && k > 0)
	{
		output_min_zero(list, str, k);
	}
	else if (list->flag_minus == 1)
		output_minus(list, str);
	else
		output_not_minus(list, str);
	free(str);
	list->frt_ptr++;
}
