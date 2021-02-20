/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:25:59 by maxim             #+#    #+#             */
/*   Updated: 2021/02/01 14:28:31 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_n(char c, int n)
{
	int	written;

	written = 0;
	while (written < n)
	{
		ft_putchar_fd(c, 1);
		written++;
	}
	return (written);
}
