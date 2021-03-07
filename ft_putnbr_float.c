/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:10:43 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/07 20:35:30 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char    *ft_add_zero(char *str)
{
    int i;
    int y;
    char *temp;

    i = ft_strlen(str);
    if (i == 6)
        return (str);
    y = 6 - i;
    if(!(temp = ft_calloc(sizeof(temp), y + 1)))
        return (NULL);
    ft_memset((void *)temp, '0', y);
    str = ft_strcat(temp, str);
    return (str);
}

static char    *ft_free_and_zero(char *ptr, char *str)
{
    if (ft_strlen(str) != 6)
    {
        str = ft_add_zero(str);
        free (ptr);
        return (str);
    }
    return (str);
}

unsigned long long int      ft_get_numb(long double nbr)
{
    unsigned long long int start;
    
    nbr += 0.000001;
    if (nbr < 0)
        start = -nbr * 1000000;
    else
        start = nbr * 1000000;
    return (start);
}

char    *ft_get_minus(char *str)
{
    char *temp;
    int i;

    i = ft_strlen(str);
    temp = ft_calloc(sizeof(temp), i);
    temp = ft_strcpy(temp, str);
    ft_memset((void *)str, 0, i);
    str[0] = '-';
    str = ft_strcat(str, temp);
    free (temp);
    return (str);
}

char    *ft_putnbr_float(long double nbr)
{ 
    unsigned long long int start;
    unsigned long long int end;
    char *final;
    char *str;
    char *ptr;

    start = ft_get_numb(nbr);
    end = start % 1000000;
    start /= 1000000;
    str = ft_itoa((int)start);
    final = ft_calloc(sizeof(final), (6 + ft_strlen(str)));
    final = ft_strcpy(final, str);
    free (str);
    final[ft_strlen(final)] = '.';
    str = ft_itoa((int)end);
    ptr = str;
    str = ft_free_and_zero(ptr, str);
    if (nbr < 0)
        ft_get_minus(final);
    ft_strcat(final, str);
    free (str);
    return (final);
}