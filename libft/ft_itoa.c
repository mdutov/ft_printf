/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:39:29 by maxim             #+#    #+#             */
/*   Updated: 2021/02/01 14:38:00 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nlen(int n, int minus)
{
	int nlen;

	nlen = 1;
	while ((n /= 10))
		nlen++;
	return (nlen + minus);
}

char			*ft_itoa(int n)
{
	char	*dest;
	int		nlen;
	int		minus;
	int		nbr;

	minus = (n < 0) ? 1 : 0;
	nlen = ft_nlen(n, minus);
	if ((dest = ft_newstr(nlen)))
	{
		dest[nlen--] = '\0';
		while (nlen >= minus)
		{
			nbr = n % 10;
			dest[nlen--] = '0' + ft_nonsign(nbr);
			n /= 10;
		}
		if (minus)
			dest[0] = '-';
	}
	return (dest);
}
