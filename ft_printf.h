/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:32:05 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 16:00:22 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_10to16_pf(unsigned long long n, int count, char c);
int	ft_put_u_nbr_pf(unsigned int n, int count);
int	ft_putchar_pf(int c);
int	ft_putnbr_pf(int n, int count);
int	ft_putstr_pf(char *s);
int	show_error_pf(void);
int	ft_put_address_pf(unsigned long long n);

#endif