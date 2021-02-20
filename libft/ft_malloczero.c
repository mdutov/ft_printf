/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloczero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:39:17 by maxim             #+#    #+#             */
/*   Updated: 2021/02/01 15:36:02 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloczero(size_t size)
{
	void	*dest;

	if ((dest = malloc(size)))
		ft_bzero(dest, size);
	return (dest);
}
