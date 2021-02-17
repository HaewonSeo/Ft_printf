/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:30:21 by haseo             #+#    #+#             */
/*   Updated: 2021/02/17 18:38:57 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_str(t_spec *spec, const char *str)
{
	char	pad;
	int		str_len;

	pad = (spec->zero_pad) ? '0' : ' ';
	str_len = (int)ft_strlen(str);
	if (spec->prec < str_len)
		str_len = spec->prec;
	spec->cnt_ch = (spec->width >= str_len) ? spec->width : str_len;
	spec->width -= str_len;
	if (spec->hyphen)
	{
		write(1, str, str_len);
		while ((spec->width)-- > 0)
			ft_putchar_fd(pad, 1);
	}
	else
	{
		while ((spec->width)-- > 0)
			ft_putchar_fd(pad, 1);
		write(1, str, str_len);
	}
}
