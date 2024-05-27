/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:45:55 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 16:01:31 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	int	count;

	if (s == NULL)
		return (write(1, "(null)", 6));
	count = 0;
	while (*s)
	{
		write(1, s, 1);
		count++;
		s++;
	}
	return (count);
}
