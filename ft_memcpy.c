/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:26:22 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/09 16:26:22 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*des;
	unsigned char		*sr;

	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		des[i] = sr[i];
		i++;
		n--;
	}
	return (dest);
}
