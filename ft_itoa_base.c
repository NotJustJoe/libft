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

char	*ft_rev_tab(char *rev, int i)
{
	char	*res;
	int		j;

	j = 0;
	res = ft_calloc(sizeof(res), i);
	i--;
	while (i >= 0)
	{
		res[j] = rev[i];
		i--;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	*ft_itoa_base(unsigned long long int n, char *base)
{
	char	*rev;
	char	*res;
	int		i;
	int		len;
	int		remain;

	i = 0;
	remain = 0;
	len = ft_strlen(base);
	rev = ft_calloc(sizeof(rev), 64);
	if (!rev)
		return (NULL);
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
	res = ft_rev_tab(rev, i);
	free(rev);
	return (res);
}
