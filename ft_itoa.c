/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:44:53 by tanota            #+#    #+#             */
/*   Updated: 2022/12/06 15:37:10 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Alloue (avec malloc()) et retourne une chaîne
de caractères représentant l’entier ’n’ reçu en
argument. Les nombres négatifs doivent être gérés.
*/

#include "libft.h"

static int	size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_hitoa(char *tab, long int nb, int i, int count)
{
	if (nb < 0)
	{
		nb *= -1;
		tab[0] = '-';
		i++;
	}
	tab[count] = '\0';
	while (count-- > i)
	{
		tab[count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	int			i;
	int			count;
	char		*tab;
	long int	nb;

	i = 0;
	nb = n;
	count = size(nb);
	if (nb < 0 || count == 0)
		count++;
	tab = malloc(sizeof(char) * count + 1);
	if (!tab)
		return (NULL);
	ft_hitoa(tab, nb, i, count);
	return (tab);
}
