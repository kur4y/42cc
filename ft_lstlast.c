/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:42:23 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 19:27:18 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Renvoie le dernier élément de la liste.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst)
		while (lst->next)
			lst = lst->next;
	last = lst;
	return (last);
}
