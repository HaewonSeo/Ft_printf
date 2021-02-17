/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 23:16:08 by haseo             #+#    #+#             */
/*   Updated: 2021/02/17 19:29:32 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define TYPE "cspdiuxX%\0"

typedef struct	s_spec
{
	int		zero_pad;
	int		hyphen;
	int		dot;
	int		prec;
	int		width;

	int		type;
	int		nbr_base;
	int		nbr_negative;
	int		cnt_ch;

}				t_spec;

void	printf_spec(t_spec *spec, va_list ap);
int		print_format(const char *format, va_list ap);
int		ft_printf(const char *format, ...);

void	init_spec(t_spec *spec);
void	get_opt_spec(t_spec *spec, const char ch, va_list ap);
void	handle_unusual_case(t_spec *spec);

void	printf_ch(t_spec *spec, const char ch);
void	printf_str(t_spec *spec, const char *str);
void	set_pad_len(t_spec *spec, int *zero_pad_len, int *blank_pad_len, int itoa_len);
void	get_cnt_ch(t_spec *spec, int zero_pad_len, int blank_pad_len, int itoa_len);
void	printf_nbr_by_len(t_spec *spec, char *itoa, int zero_pad_len, int blank_pad_len, int itoa_len);
void	printf_nbr(t_spec *spec, long nbr);

#endif
