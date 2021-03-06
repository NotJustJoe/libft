/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:10:43 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/06 22:15:08 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_putnbr_float(long double nbr)
{ 
    unsigned long long int start;
    unsigned long long int end;
    char *final;
    char *str;

    if (nbr < 0)
        start = -nbr * 1000000;
    else
        start = nbr * 1000000;
    end = start % 1000000;
    start /= 1000000;
    str = ft_itoa((int)start);
    final = ft_calloc(sizeof(final), (6 + ft_strlen(str)));
    final = ft_strcpy(final, str);
    free (str);
    final[ft_strlen(final)] = '.';
    str = ft_itoa((int)end);
    ft_strcat(final, str);
    free (str);
    return (final);
}