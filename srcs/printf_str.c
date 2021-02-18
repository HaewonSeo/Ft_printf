/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:30:21 by haseo             #+#    #+#             */
/*   Updated: 2021/02/18 02:04:10 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printf_str_by_len(t_spec *spec, const char *str, int blank_pad_len, int valid_str_len)
{
	spec->cnt_ch += valid_str_len;
	if (spec->hyphen)
	{
		write(1, str, valid_str_len);
		while ((blank_pad_len)-- > 0)
		{
			ft_putchar_fd(' ', 1);
			spec->cnt_ch++;
		}
	}
	else
	{
		while ((blank_pad_len)-- > 0)
		{
			ft_putchar_fd(' ', 1);
			spec->cnt_ch++;
		}
		write(1, str, valid_str_len);
	}
}

void		printf_str(t_spec *spec, const char *str)
{
	int		str_len;
	int		valid_str_len;
	int		blank_pad_len;

	if (!str)
		str = "(null)";
	if (spec->dot && spec->prec == 0)
	{
		spec->cnt_ch = 0;
		return ;
	}
	str_len = (int)ft_strlen(str);
	valid_str_len = ((spec->prec > 0) && (spec->prec < str_len)) ? spec->prec : str_len;
	blank_pad_len = spec->width - valid_str_len;
	printf_str_by_len(spec, str, blank_pad_len, valid_str_len);
}
