/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:57:26 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/05 16:31:10 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_lencheck(long long int n, char *base)
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
		nb = nb / ft_strlen(base);
		len++;
	}
	return (len);
}

static char	*ft_iteration(char *str, long long int neg, long long int i, char *base)
{
 
	while (i >= 0)
	{ 
		str[i] = base[neg % ft_strlen(base)]; 
		neg = neg / ft_strlen(base);
		i--; 
	} 
	return (str);
} 

char		*ft_itoa_base(long long int n, char *base)
{
	long long int		i;
	long long int			nb;
	long long int	neg;
	char			*str;
    
	nb = (long long int)n;
	i = ft_lencheck(nb, base) - 1; 
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
	str = ft_iteration(str, neg, i, base); 
	return (str);
}