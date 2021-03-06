/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:34:28 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/16 00:34:28 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = *lst;
		(del)(ptr->content);
		*lst = ptr->next;
		free(ptr);
	}
	(*lst) = NULL;
}