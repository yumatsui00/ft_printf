/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_error_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:20:14 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/23 16:01:50 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	show_error_pf(void)
{
	write(1, "\n\n\n+++UNDEFINED SPECIFIER+++\n\n\n", 37);
	return (-1);
}
