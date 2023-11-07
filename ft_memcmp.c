/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:21:45 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 19:29:30 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction memcmp() compare les n premiers octets
des zones mémoire s1 et s2. Elle renvoie un entier inférieur,
égal, ou supérieur à zéro, si s1 est respectivement inférieure,
égale ou supérieur à s2.  
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*k;

	i = 0;
	j = (unsigned char *)s1;
	k = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (j[i] != k[i])
			return (j[i] - k[i]);
		i++;
	}
	return (0);
}
