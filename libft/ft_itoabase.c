/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:38:31 by haseo             #+#    #+#             */
/*   Updated: 2021/02/19 22:16:32 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(long n, int base, int hash)
{
	int		len;

	len = 0;
	if (hash && base == 16)
		len = 2;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

static char		*ft_getbaseset(char type)
{
	if (type == 'd' || type == 'i' || type == 'u')
		return ("0123456789");
	else if (type == 'x' || type == 'p')
		return ("0123456789abcdef");
	else if (type == 'X')
		return ("0123456789ABCDEF");
	else
		return (NULL);
}

char			*ft_itoabase(long nbr, char type, int hash)
{
	char	*baseset;
	int		base;
	char	*str;
	int		len;

	baseset = ft_getbaseset(type);
	base = ft_strlen(baseset);
	len = ft_nbrlen(nbr, base, hash);
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (hash && base == 16)
	{
		str[0] = '0';
		if (type == 'x')
			str[1] = 'x';
		else
			str[1] = 'X';
		len -= 2;
	}
	while (len)
	{
		str[--len] = baseset[nbr % base];
		nbr = nbr / base;
	}
	return (str);
}
