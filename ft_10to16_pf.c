/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_10to16_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:07:11 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 15:59:03 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_10to16_pf(unsigned long long n, int count, char c)
{
	const char	base_lower[16] = "0123456789abcdef";
	const char	base_upper[16] = "0123456789ABCDEF";
	char		*base;

	if (c == 'x')
		base = (char *)&base_lower[0];
	else
		base = (char *)&base_upper[0];
	if (n < 16 && 0 <= n)
		count += write(1, &base[n], 1);
	else
	{
		count = ft_10to16_pf(n / 16, count, c);
		count += write(1, &base[(n % 16)], 1);
	}
	return (count);
}

// int main()
// {
// 	unsigned int num = 71234567;
// 	printf("%x\n", num);
// 	printf(" is what it wrote and value is %d\n", ft_10to16_pf(num, 0, 'X'));
// }