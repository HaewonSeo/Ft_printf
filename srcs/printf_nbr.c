/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:30:12 by haseo             #+#    #+#             */
/*   Updated: 2021/02/17 19:51:39 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_pad_len(t_spec *spec, int *zero_pad_len, int *blank_pad_len, int itoa_len)
{
	*zero_pad_len = 0;
	*blank_pad_len = 0;
	if (spec->prec > itoa_len)
	{
		*zero_pad_len = spec->prec - itoa_len;
		*blank_pad_len = spec->width - spec->prec;
		if (spec->nbr_negative)
			(*blank_pad_len)--;
	}
	else
	{
		*blank_pad_len = spec->width - itoa_len;
		if (spec->nbr_negative)
			(*blank_pad_len)--;
	}
}

void	get_cnt_ch(t_spec *spec, int zero_pad_len, int blank_pad_len, int itoa_len)
{
	spec->cnt_ch += itoa_len;
	if (zero_pad_len > 0)
		spec->cnt_ch += zero_pad_len;
	if (blank_pad_len > 0)
		spec->cnt_ch += blank_pad_len;
	if (spec->nbr_negative)
		spec->cnt_ch++;
	if (spec->type == 'p')
		spec->cnt_ch += 2;
}

void	printf_nbr_by_len(t_spec *spec, char *itoa, int zero_pad_len, int blank_pad_len, int itoa_len)
{
	if (spec->hyphen)
	{
		if (spec->nbr_negative)
			ft_putchar_fd('-', 1);
		while(zero_pad_len--)
			ft_putchar_fd('0', 1);
		if (spec->type == 'p')
			ft_putstr_fd("0x", 1);
		write(1, itoa, itoa_len);
		while(blank_pad_len--)
			ft_putchar_fd(' ', 1);
	}
	else
	{
		while(blank_pad_len--)
			ft_putchar_fd(' ', 1);
		if (spec->nbr_negative)
			ft_putchar_fd('-', 1);
		while(zero_pad_len--)
			ft_putchar_fd('0', 1);
		if (spec->type == 'p')
			ft_putstr_fd("0x", 1);
		write(1, itoa, itoa_len);
	}
}

void	printf_nbr(t_spec *spec, long nbr)
{
	char	*itoa;
	int		itoa_len;
	int		zero_pad_len;
	int		blank_pad_len;

	if (nbr < 0)
	{
		spec->nbr_negative = 1;
		nbr = -nbr;
	}
	itoa = ft_itoabase(nbr, spec->type);
	itoa_len = (int)ft_strlen(itoa);
	set_pad_len(spec, &zero_pad_len, &blank_pad_len, itoa_len);
	get_cnt_ch(spec, zero_pad_len, blank_pad_len, itoa_len);
	printf_nbr_by_len(spec, itoa, zero_pad_len, blank_pad_len, itoa_len);
	free(itoa);
}
