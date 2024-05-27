/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:47:15 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 15:59:38 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	divide_modifier(char c, va_list ap)
{
	int	size;

	if (c == 'c')
		size = ft_putchar_pf(va_arg(ap, int));
	else if (c == 's')
		size = ft_putstr_pf(va_arg(ap, char *));
	else if (c == 'p')
		size = ft_put_address_pf(va_arg(ap, unsigned long long));
	else if (c == 'd' || c == 'i')
		size = ft_putnbr_pf(va_arg(ap, int), 0);
	else if (c == 'u')
		size = ft_put_u_nbr_pf(va_arg(ap, unsigned int), 0);
	else if (c == 'x')
		size = ft_10to16_pf((unsigned int)va_arg(ap, int), 0, 'x');
	else if (c == 'X')
		size = ft_10to16_pf((unsigned int)va_arg(ap, int), 0, 'X');
	else if (c == '%')
		size = write(1, "%", 1);
	else
		return (-1);
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	int		size;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			size = divide_modifier(*str, ap);
			if (size == -1)
				return (show_error_pf());
			else
				count += size;
		}
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (count);
}

// int main()
// {
// 	char *test1 = "0123456789";
// 	int	test2 = 1234567;
// 	char test3 = 'a';
// 	int	ans;
// 	int	res;
// 	ans = printf("answer = %s = NULL\n", NULL);
// 	res = ft_printf("result = %s = NULL\n", NULL);
// 	printf("   printf = %d\n", ans);
// 	printf("ft_printf = %d\n\n", res);
// }
// // //c, s, p, d, i, u, x, X, %