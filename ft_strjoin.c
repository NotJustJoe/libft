/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:58:29 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/14 12:58:29 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		a;
	int		b;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	ptr = ft_calloc(sizeof(char), (a + b + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_strcpy(ptr, s1);
	ptr = ft_strcat((char *)ptr, s2);
	return (ptr);
}
