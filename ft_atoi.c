/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:29:02 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/02 14:29:02 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int b;
	int signe;

	signe = 1;
	b = 0;
	i = 0;
	while (((char)str[b] >= 9 && (char)str[b] <= 13) || (char)str[b] == ' ')
		b++;
	if ((char)str[b] == '-' || (char)str[b] == '+')
	{
		if ((char)str[b] == '-')
			signe *= -1;
		b++;
	}
	while ((char)str[b] >= '0' && (char)str[b] <= '9')
	{
		i = (i * 10) + (char)str[b] - '0';
		b++;
	}
	return (i * signe);
}
