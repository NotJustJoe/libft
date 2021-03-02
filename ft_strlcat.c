/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:17:26 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/10 13:17:26 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	si;
	size_t	sr;

	i = 0;
	si = ft_strlen((char *)(dest));
	sr = ft_strlen((char *)(src));
	if (n <= si || n <= 0)
		return (sr + n);
	while ((si + i) < (n - 1) && (src[i]))
	{
		dest[si + i] = src[i];
		i++;
	}
	dest[si + i] = '\0';
	return (si + sr);
}
