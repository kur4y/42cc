/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:41:08 by tanota            #+#    #+#             */
/*   Updated: 2022/12/06 12:49:09 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction strncmp() compare les n premiers caractères de deux chaînes
s1 et s2. Elle renvoie un entier négatif, nul, ou positif, si s1 est
respectivement inférieure, égale ou supérieure à s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (!s1 || !s2)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0')
		&& (s1[i] == s2[i]) && (i + 1 < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
