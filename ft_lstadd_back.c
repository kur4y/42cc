/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:40:39 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 19:26:08 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Ajoute l’élément ’new’ à la fin de la liste.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(*lst))
		*lst = new;
	else
	{
		last = ft_lstlast(*(lst));
		last->next = new;
	}
}
