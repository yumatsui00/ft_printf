/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:47:40 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 12:47:11 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n, int count)
{
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (n < 0)
	{
		count += write(1, "-", 1);
		count = ft_putnbr_pf(n * -1, count);
	}
	else if (n < 10)
		count += ft_putchar_pf('0' + n);
	else
	{
		count = ft_putnbr_pf(n / 10, count);
		count += ft_putchar_pf('0' + (n % 10));
	}
	return (count);
}

// int main()
// {
// 	int count;
// 	printf(" is what it wrote and value is %d\n", ft_putnbr(-100, 0));
// 	write(1, "\n", 1);
// }