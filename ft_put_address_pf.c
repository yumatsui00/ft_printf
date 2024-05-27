/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:55:47 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 16:01:01 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_address_pf(unsigned long long ptr)
{
	int	count;

	count = write(1, "0x", 2);
	count += ft_10to16_pf(ptr, 0, 'x');
	return (count);
}
