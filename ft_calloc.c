/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:37:05 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/14 12:37:05 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char				*dst;
	unsigned int		total;
	unsigned int		i;

	total = count * size;
	if (!(dst = malloc(total)))
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
