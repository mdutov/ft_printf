/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:42 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 18:37:37 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct		s_list
{
	const char	*frt_ptr;
	va_list		ap;
	int			flag_minus;
	int			flag_zero;
	int			extra_zero;
	int			hex_null;
	int			minus;
	int			width;
	int			prec;
	int			type;
	int			written;
}					t_list;

#endif
