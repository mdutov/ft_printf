/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:41:12 by maxim             #+#    #+#             */
/*   Updated: 2021/02/01 14:32:52 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_wrn(char *str)
{
	int	written;

	written = 0;
	if (!str)
		return (0);
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
		written++;
	}
	return (written);
}
