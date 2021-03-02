/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:00:53 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/20 14:00:53 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strclrstr(char *str)
{
	int		i;
	int		b;
	char	*tab;

	b = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	tab = malloc(i * sizeof(char));
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[b] = str[i];
			b++;
		}
		i++;
	}
	tab[b] = '\0';
	return (tab);
}