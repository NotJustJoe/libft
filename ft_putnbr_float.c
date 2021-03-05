/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:10:43 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/05 16:49:59 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_free(char *start, char *end)
{
    free(start);
    free(end);
}

char    *ft_putnbr_float(long double nbr)
{ 
    long long int i;
    int c;
    char *start;
    char *end;
    char *final;

    c = 1;
    if (nbr < 0)
    {
        nbr = -nbr;
        c++;
    }
    i = (long long int)nbr;
    start = ft_calloc(sizeof(char *), ft_strlen(ft_itoa(i) + c));
    end = ft_calloc(sizeof(char *), 8);
    final = ft_calloc(sizeof(char *) , (ft_strlen(ft_itoa(i) + 9)));
    if (c > 1)
        final[0] = '-';
    end[0] = '.';
    ft_strcat(start, ft_itoa(i));
    nbr -= i;
    nbr *= 1000000;
    i = (long long int)nbr;
    ft_strcat(end, ft_itoa(i));
    ft_strcat(final, start);
    ft_strcat(final, end);
    ft_free(start, end);
    return (final);
}