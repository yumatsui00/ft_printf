/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:31:25 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 13:28:11 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u_nbr_pf(unsigned int n, int count)
{
	if (n < 10)
		count += ft_putchar_pf('0' + n);
	else
	{
		count = ft_put_u_nbr_pf(n / 10, count);
		count += ft_putchar_pf('0' + (n % 10));
	}
	return (count);
}

// int main()
// {
// 	int count;
// 	printf(" is what it wrote and value is %d\n", ft_put_u_nbr(4294967294, 0));
// 	write(1, "\n", 1);
// }