/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:38:04 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 15:37:05 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FINDER_H
# define FINDER_H

# include "../general/ft_printf.h"

void	find_flag(t_list *list);
void	find_type(t_list *list);
void	find_width(t_list *list);
void	find_precision(t_list *list);

#endif
