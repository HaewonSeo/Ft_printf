/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:38:31 by haseo             #+#    #+#             */
/*   Updated: 2021/02/17 19:47:07 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(long n)
{
	int		len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
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

char			*ft_itoabase(long nbr, char type)
{
	char	*str;
	int		len;
	char	*baseset;
	int		base;

	len = ft_nbrlen(nbr);
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	baseset = ft_getbaseset(type);
	base = ft_strlen(baseset);
	while (len)
	{
		str[--len] = baseset[nbr % base];
		nbr = nbr / base;
	}
	return (str);
}
