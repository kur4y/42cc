/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:54:52 by tanota            #+#    #+#             */
/*   Updated: 2022/12/07 16:16:25 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Alloue (avec malloc()) et retourne un tableau
de chaînes de caractères obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.
*/

#include "libft.h"

static int	get_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*get_word(char *str, char c)
{
	char	*dst;
	int		len;
	int		j;

	j = 0;
	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	dst = (char *)malloc ((sizeof(char)) * (len + 1));
	if (!dst)
		return (0);
	while (j < len)
	{
		dst[j] = str[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		size;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	size = get_count((char *)s, c);
	tab = (char **)malloc ((sizeof(char *)) * (size + 1));
	if (!tab)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			tab[j++] = get_word((char *)s + i, c);
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	tab[j] = 0;
	return (tab);
}
