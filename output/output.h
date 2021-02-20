/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:06:57 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 18:26:37 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_H
# define OUTPUT_H

# include "../general/ft_printf.h"

void	output_width(t_list *list, int len);
void	output_precision(t_list *list, char *str, int prec);
void	output_minus(t_list *list, char *str);
void	output_not_minus(t_list *list, char *str);

#endif
