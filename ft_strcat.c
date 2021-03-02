/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:03:31 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/10 13:03:31 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int i;
	unsigned int d;

	d = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[d])
	{
		dest[i] = src[d];
		d++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
