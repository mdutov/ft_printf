/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:36:59 by maxim             #+#    #+#             */
/*   Updated: 2021/02/05 13:22:59 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include "../general/ft_printf.h"

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isdigit(int c);
int					ft_isspace(int c);
char				*ft_itoa(int n);
void				*ft_malloczero(size_t size);
char				*ft_newstr(size_t size);
int					ft_nonsign(int nbr);
int					ft_num_of_dig(int n, int basis);
void				ft_putchar_fd(char c, int fd);
int					ft_putchar_n(char c, int n);
void				ft_putstr_fd(char const *s, int fd);
int					ft_putstr_wrn(char *str);
size_t				ft_strlen(const char *s);
int		            ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_ultoa_hex(unsigned int n, t_list *set);
char				*ft_ultoa_perc(unsigned long long int num);
char				*ft_ultoa(unsigned int n);

#endif
