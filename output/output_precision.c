/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:06:42 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 18:26:37 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "output.h"

void	output_precision(t_list *list, char *str, int prec)
{
	int i;

	i = 0;
	while (i < prec && str[i])
	{
		ft_putchar_fd(str[i], 1);
		list->written++;
		i++;
	}
}
