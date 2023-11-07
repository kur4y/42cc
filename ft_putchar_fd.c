/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:19:58 by tanota            #+#    #+#             */
/*   Updated: 2022/12/05 18:56:34 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Écrit le caractère ’c’ sur le descripteur de
fichier donné.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
