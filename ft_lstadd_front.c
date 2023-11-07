/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:59:22 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 19:26:27 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Ajoute l’élément ’new’ au début de la liste.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
	}
	*lst = new;
}
