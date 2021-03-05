/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:32:37 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/09 19:32:37 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	if (!(str = (char *)ft_calloc(sizeof(char) , ft_strlen((char *)s) + 1)))
		return (NULL);
	else
		str = ft_strcpy(str, s);
	return (str);
}
