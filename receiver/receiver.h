/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   receiver.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:51:59 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 15:01:25 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECEIVER_H
# define RECEIVER_H

# include "../general/ft_printf.h"

void				rec_char(t_list *finfo);
void				rec_hex(t_list *finfo);
void				rec_int(t_list *finfo);
void				rec_prec(t_list *finfo);
void				rec_ptr(t_list *finfo);
void				rec_str(t_list *finfo);
void				rec_unsi(t_list *finfo);

#endif
