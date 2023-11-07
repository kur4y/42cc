/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:35:33 by tanota            #+#    #+#             */
/*   Updated: 2022/12/06 12:44:53 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction toupper() convertit la lettre c en majuscule.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
