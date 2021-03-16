/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:47:37 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/16 11:38:58 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(unsigned long long int n, char *base)
{
	char	*res;
	char	*rev;
	int		i;
	int		j;
	int		len;
	int		remain;

	rev = ft_calloc(sizeof(rev), 64);
	i = 0;
	j = 0;
	len = 0;
	remain = 0;
	if (!rev)
		return (NULL);
	len = ft_strlen(base);
	while (n > 0)
	{
		remain = n % len;
		if (remain < 10)
			rev[i] = remain + '0';
		else
			rev[i] = 'a' + (remain - 10);
		n = n / len;
		i++;
	}
	res = ft_calloc(sizeof(res), i);
	i--;
	while (i >= 0)
	{
		res[j] = rev[i];
		i--;
		j++;
	}
	res[j] = '\0';
	free(rev);
	return (res);
}
