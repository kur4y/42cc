/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:53:23 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 18:54:18 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Alloue (avec malloc()) et retourne une copie de
la chaîne ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaîne de
caractères.
*/

#include "libft.h"

int	checkchar(char a, char const *b)
{
	int	i;

	i = ft_strlen(b);
	while (i >= 0)
	{
		if (b[i] == a)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[j] && checkchar(s1[j], set))
		j++;
	while (k > j && checkchar(s1[k - 1], set))
		k--;
	str = malloc(sizeof(char) * (k - j + 1));
	if (!str)
		return (NULL);
	while (j < k)
		str[i++] = s1[j++];
	str[i] = '\0';
	return (str);
}
