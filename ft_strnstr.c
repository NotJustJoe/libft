/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:55:43 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/11 15:55:43 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (!(find[0]))
		return ((char *)str);
	while (str[i] && i < n)
	{
		a = 0;
		if (str[i] == find[a])
		{
			while (str[i + a] == find[a] && (i + a) < n)
			{
				if (find[a + 1] == '\0')
					return ((char *)str + i);
				a++;
			}
		}
		i++;
	}
	return (NULL);
}
