/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:57:26 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/05 16:31:44 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_lencheck(long n)
{
	long	nb;
	long	len;

	len = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*ft_iteration(char *str, unsigned int neg, long i)
{
	while (i >= 0)
	{
		if (neg == 0)
			break ;
		str[i] = neg % 10 + '0';
		neg = neg / 10;
		i--;
	}
	return (str);
}

char		*ft_itoa_unsigned(unsigned int n)
{
	unsigned int			i;
	unsigned int			nb;
	unsigned int	neg;
	char			*str;

	nb = (unsigned int)n;
	i = ft_lencheck(nb) - 1;
	if (!(str = ft_calloc(sizeof(char), i + 2)))
		return (NULL);
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	neg = nb; 
	str = ft_iteration(str, neg, i);
	return (str);
}