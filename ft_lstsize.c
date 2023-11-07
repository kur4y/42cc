/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:42:37 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 19:27:59 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compte le nombre d’éléments de la liste.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}	
	return (i);
}
