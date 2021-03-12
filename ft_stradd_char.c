/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:19:23 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/06 17:50:55 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd_char(char *dest, char a)
{
	unsigned int i;
	char *str;

	i = 0;
	while (dest[i])
		i++;
	if (!(str = ft_calloc(sizeof(str), i)))
		return (NULL);
	dest[i] = a;
	dest[i + 1] = '\0';
	ft_strcpy(str, dest);
	return (str);
}