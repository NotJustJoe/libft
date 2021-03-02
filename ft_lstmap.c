/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:57:26 by trofidal          #+#    #+#             */
/*   Updated: 2021/02/17 15:57:26 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ptr;
	t_list *ptr2;

	ptr2 = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		ptr = ft_lstnew(lst->content);
		ptr->content = (f)(ptr->content);
		if (!ptr)
			(del)(lst->content);
		ft_lstadd_back(&ptr2, ptr);
		lst = lst->next;
	}
	return (ptr2);
}

