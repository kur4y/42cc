/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:21:48 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 19:28:58 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction memchr() examine les n premiers octets
de la zone mémoire pointée par s à la recherche
du caractère c. Le premier octet correspondant à c
(interprété comme un unsigned char) arrête l'opération.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t			i;
	unsigned char	*j;

	i = 0;
	j = (unsigned char *)s;
	while (i < size)
	{
		if (j[i] == (unsigned char)c)
			return (&j[i]);
		i++;
	}
	return (NULL);
}
