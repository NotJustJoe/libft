/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:21:26 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/21 16:21:26 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_base_is_valid(char *base)
{
    int i;
    int j;

    i = 0;
    if ((!(base)) || ft_strlen(base) == 1)
        return (1);
    while (base[i])
    {
        j = 0;
        if (base[i] == '-' || base[i] == '+')
            return (1);
        while (base[j])
        {
            if (base[j] == base[i] && i != j)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void     ft_putnbr_base(long long int nbr, char *base)
{
 
    if (ft_base_is_valid(base) == 1)
        return;
    if (nbr < 0)
    {
        nbr = -nbr;
        ft_putchar('-');
    }
    if (nbr > (long long int)ft_strlen(base))
    {
        ft_putnbr_base(nbr / ft_strlen(base), base);
        ft_putnbr_base(nbr % ft_strlen(base), base);
    }
    if (nbr < (long long int)ft_strlen(base))
        ft_putchar(base[nbr]);

}