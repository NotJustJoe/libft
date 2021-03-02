/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:14:21 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/15 12:14:21 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (str == NULL)
		return (NULL);
	else
	{
		str[0] = 0;
		str = ft_strncpy(str, s, n);
	}
	return (str);
}
