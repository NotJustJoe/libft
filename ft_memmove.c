/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:53:55 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/11 15:53:55 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*des;
	unsigned char		*sr;

	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	if (des > sr)
	{
		while (i < n)
		{
			des[n - 1] = sr[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			des[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
