/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:03:43 by tanota            #+#    #+#             */
/*   Updated: 2022/12/07 17:12:05 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Alloue avec malloc()) et retourne une nouvelle
chaîne, résultat de la concaténation de s1 et s2.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s1) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
	str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = 0;
	return (str);
}
