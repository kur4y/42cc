/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:31:34 by tanota            #+#    #+#             */
/*   Updated: 2022/12/06 12:37:30 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction strlen() calcule la longueur de la chaîne de caractères s,
sans compter l'octet nul « \0 » final. 
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
