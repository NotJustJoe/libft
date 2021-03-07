/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:50:12 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/07 23:59:20 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_crakito(long long int n)
{
	long long int	nb;
	long long int	len;

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

static char	*ft_iteration(char *str, long long int neg, long long int i)
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

char		*ft_long_itoa(long long int n)
{
	long long int	i;
	long long int	nb;
	long long int	neg;
	char			*str;

	nb = n;
	i = ft_crakito(nb) - 1;
	if (!(str = ft_calloc(sizeof(char), i + 2)))
		return (NULL);
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	neg = nb;
	if (n < 0)
	{
		str[0] = '-';
		neg = nb * -1;
	}
	str = ft_iteration(str, neg, i);
	return (str);
}