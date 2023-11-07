/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:41:59 by tanota            #+#    #+#             */
/*   Updated: 2022/12/06 16:48:16 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Libère la mémoire de l’élément passé en argument en
utilisant la fonction ’del’ puis avec free(). La
mémoire de ’next’ ne doit pas être free.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
