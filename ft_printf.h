/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <sfathima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:15:31 by sfathima          #+#    #+#             */
/*   Updated: 2021/11/14 16:44:07 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *arg, ...);
int		ft_print_char(char c, int ct);
int		ft_print_str(char *c, int ct);
int		ft_print_ptr(unsigned long long pt, int ct);
int		ft_print_ptrhex(unsigned long long nb, int ct);
int		ft_strlen(const char *s);
int		ft_print_int(long nb, int ct);
int		ft_print_u(unsigned int u, int ct);
int		ft_check_hex(unsigned int nbr, int ct, char c);
int		ft_print_hex(unsigned int nbr, int ct, char c);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_arg_space(va_list ap, int ct, char c, char d);
int		ft_arg_plus(va_list ap, int ct, char c);

#endif
