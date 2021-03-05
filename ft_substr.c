/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:43:45 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/14 12:43:45 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	str_len;

	str_len = ft_strlen(str) - start;
	if (len > str_len)
		len = str_len;
	if (!(ptr = ft_calloc(sizeof(char), 1)))
		return (NULL);
	if (start < ft_strlen(str))
	{
		free(ptr);
		if (!(ptr = ft_calloc(sizeof(char), len + 1)))
			return (NULL);
		ptr = ft_strncpy(ptr, str + start, len);
	}
	return (ptr);
}
