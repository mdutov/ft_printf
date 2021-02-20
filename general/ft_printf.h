/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:39:42 by maxim             #+#    #+#             */
/*   Updated: 2021/02/03 19:38:14 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define MIN -2147483648

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

# include <stdarg.h>
# include "./list.h"
# include "../libft/libft.h"
# include "../output/output.h"
# include "../finder/finder.h"
# include "../receiver/receiver.h"
# include "../utils/utils.h"

int		ft_printf(const char *format, ...);

#endif
