/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:50:42 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/02 14:26:21 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_check_digit(char *str)
{
	int				i;
	int				y;
	long long int	pow;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			while (str[i])
			{
				y++;
				i++;
			}
		}
		i++;
	}
	y--;
	pow = ft_recursive_power(10, y);
	return (pow);
}

long double				ft_atof(const char *str)
{
	char				*toatoi;
	long double			digit;
	long long int		power;
	unsigned long long	value;

	toatoi = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	power = ft_check_digit((char *)str);
	toatoi = ft_strclrstr((char *)str);
	value = ft_atoi(toatoi);
	free(toatoi);
	digit = value;
	if (str[0] == '-')
		return (-digit / power);
	return (digit / power);
}
