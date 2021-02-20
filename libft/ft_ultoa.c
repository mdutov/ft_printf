/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:37:37 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 18:20:46 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ultoa(unsigned int nbr)
{
	char			*str;
	unsigned int	k;
	int				len;

	k = nbr;
	len = 1;
	while (k >= 10)
	{
		k /= 10;
		len++;
	}
	if (!(str = ft_malloczero(len)))
		return (NULL);
	str[len] = 0;
	while (nbr >= 10)
	{
		len--;
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	len--;
	str[len] = nbr % 10 + '0';
	return (str);
}
