/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:06 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/13 17:08:06 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*str;
	int			i;

	str = ft_strdup(s);
	i = 0;
	while (str[i])
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
