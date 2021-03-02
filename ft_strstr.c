/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:39:45 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/11 15:39:45 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int	i;
	int	a;

	i = 0;
	if (!(aiguille[0]))
		return ((char *)meule_de_foin);
	while (meule_de_foin[i])
	{
		if (meule_de_foin[i] == aiguille[a])
		{
			a = 0;
			while (meule_de_foin[i + a] == aiguille[a])
			{
				if (aiguille[a + 1] == '\0')
					return ((char *)meule_de_foin + i);
				a++;
			}
		}
		i++;
	}
	return (NULL);
}
