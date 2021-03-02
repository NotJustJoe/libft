/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:08:53 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/11 17:08:53 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int			*tab;
	size_t		i;

	i = 0;
	tab = malloc(size);
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)(tab));
}
