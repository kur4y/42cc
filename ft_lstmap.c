/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:09:35 by tanota            #+#    #+#             */
/*   Updated: 2023/11/07 12:09:39 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*start;

	start = 0;
	while (lst)
	{
		nlst = ft_lstnew((*f)(lst->content));
		if (!nlst)
			ft_lstclear(&lst, del);
		ft_lstadd_back(&start, nlst);
		lst = lst->next;
	}
	return (start);
}
