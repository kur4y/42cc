/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:54:10 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 19:09:03 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction calloc() alloue la mémoire nécessaire
pour un tableau de nmemb éléments de size octets,
et renvoie un pointeur vers la mémoire allouée.
Cette zone est remplie avec des zéros.
*/

#include "libft.h"

static size_t	is_safe(size_t nmemb, size_t size)
{
	size_t	size_max;

	size_max = LONG_MAX;
	if (nmemb == 0 || size == 0)
		return (0);
	if (nmemb > size_max / size || size > size_max / nmemb)
		return (LONG_MAX);
	return (nmemb * size);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;

	s = malloc(is_safe(nmemb, size));
	if (!s)
		return (0);
	ft_memset(s, 0, is_safe(nmemb, size));
	return (s);
}
