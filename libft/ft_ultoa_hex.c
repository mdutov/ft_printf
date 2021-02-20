/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:38:22 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:40:08 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_ultoa_hex(unsigned int nbr, t_list *list)
{
	char					*str;
	unsigned int			k;
	unsigned int			len;

	k = nbr;
	len = 1;
	while (k >= 16)
	{
		k /= 16;
		len++;
	}
	if (!(str = ft_malloczero(len)))
		return (NULL);
	str[len] = 0;
	while (nbr)
	{
		len--;
		k = nbr % 16;
		nbr /= 16;
		str[len] = k < 10 ? k + 48 : k % 10 + *list->frt_ptr - 23;
	}
	return (str);
}
