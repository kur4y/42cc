/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:01:19 by tanota            #+#    #+#             */
/*   Updated: 2022/12/06 12:48:29 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de caractères
qui est dupliquée depuis s. La mémoire occupée par cette nouvelle chaîne est
obtenue en appelant malloc().
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc((sizeof(char)) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
