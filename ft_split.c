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

static int	ft_countwords(char *str, char set)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (str[0] != set)
		count++;
	while (str[i])
	{
		if (str[i] == set)
		{
			if (str[i] != set && count == 0)
				count++;
			if (str[i] == set && (str[i + 1] != set && str[i + 1] != '\0'))
				count++;
		}
		i++;
	}
	return (count);
}

char		**ft_split(char const *str, char set)
{
	char	**tab;
	int		i;
	int		count;
	int		j;

	j = 0;
	count = 0;
	i = 0;
	tab = ft_calloc(sizeof(char *), (ft_countwords((char *)str, set) + 1));
	tab[0] = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] != set)
		{
			while (str[i + j] != set && str[i + j] != '\0')
				j++;
			tab[count] = ft_strndup(str + i, j);
			count++;
			i = i + j - 1;
		}
		i++;
	}
	tab[count] = 0;
	return (tab);
}
