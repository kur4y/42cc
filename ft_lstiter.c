/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:13:01 by tanota            #+#    #+#             */
/*   Updated: 2022/12/07 18:42:38 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
