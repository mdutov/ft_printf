/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:38:04 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:47:42 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../general/ft_printf.h"

void			format(t_list *list);
void			remap_flags(int strlen, char *str, t_list *list);
void			remap_flags_str(int strlen, char *str, t_list *list);

#endif
