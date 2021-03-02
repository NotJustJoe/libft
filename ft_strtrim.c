/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:23:31 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/17 13:23:31 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			b;
	char		*ptr;

	i = 0;
	if (!(s1))
		return (NULL);
	while (s1[i] && (ft_strchr(set, s1[i]) != NULL))
		i++;
	b = i;
	i = ft_strlen(s1);
	while (i >= 0 && (ft_strchr(set, s1[i]) != NULL))
	{
		i--;
		if (i == 0)
			return (ptr = ft_calloc(sizeof(char), 1));
	}
	ptr = ft_substr(s1, b, i - b + 1);
	return (ptr);
}
