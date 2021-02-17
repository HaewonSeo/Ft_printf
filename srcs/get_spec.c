/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_spec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:32:38 by haseo             #+#    #+#             */
/*   Updated: 2021/02/17 19:21:13 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_spec(t_spec *spec)
{
	spec->zero_pad = 0;
	spec->hyphen = 0;
	spec->width = 0;

	spec->dot = 0;
	spec->prec = 0;

	spec->type = 0;
	spec->nbr_base = 10;
	spec->nbr_negative = 0;
	spec->cnt_ch = 0;
}

void	get_opt_spec(t_spec *spec, const char ch, va_list ap)
{
	if (ch == '0' && spec->width == 0 && spec->dot == 0)
		spec->zero_pad = 1;
	else if (ch == '-')
		spec->hyphen = 1;
	else if (ch == '.')
		spec->dot = 1;
	else if (ft_isdigit(ch))
	{
		if (spec->dot == 0)		//get width
			spec->width += spec->width + (ch - 48);
		else					//get prec
			spec->prec += spec->prec + (ch - 48);
	}
	else if (ch == '*')
	{
		if (spec->dot == 0)		//get width
			spec->width = va_arg(ap, int);
		else					//get prec
			spec->prec = va_arg(ap, int);
	}
}

void	handle_unusual_case(t_spec *spec)
{
	if (spec->width < 0)
	{
		spec->hyphen = 1;
		spec->width *= -1;
	}
	// if (spec->zero_pad == 0 && spec->width == 0)
	// 	spec->zero_pad = 1;

	if (spec->type == '%' && spec->hyphen)
		spec->zero_pad = 0;

	if (spec->type == 'd')
		spec->zero_pad = 0;

	if (spec->type == 'x' || spec->type == 'X' || spec->type == 'p')
		spec->nbr_base = 16;

}
