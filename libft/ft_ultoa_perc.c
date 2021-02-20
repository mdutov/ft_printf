/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_perc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:38:13 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:40:40 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_ultoa_perc(unsigned long long int nbr)
{
	char					*str;
	unsigned long long int	k;
	unsigned int			len;

	k = nbr;
	len = 1;
	while (k >= 16)
	{
		k /= 16;
		len++;
	}
	len += 2;
	if (!(str = ft_malloczero(len)))
		return (NULL);
	str[0] = '0';
	str[1] = 'x';
	str[len] = 0;
	while (len > 2)
	{
		len--;
		k = nbr % 16;
		nbr /= 16;
		str[len] = k < 10 ? k + 48 : k % 10 + 'a';
	}
	return (str);
}
