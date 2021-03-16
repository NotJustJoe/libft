/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:19:23 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/16 11:13:29 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd_char(char *dest, char a)
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (dest[i])
		i++;
	str = ft_calloc(sizeof(str), i);
	if (!str)
		return (NULL);
	dest[i] = a;
	dest[i + 1] = '\0';
	ft_strcpy(str, dest);
	return (str);
}
