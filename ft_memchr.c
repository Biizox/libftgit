/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:30:08 by acharvoz          #+#    #+#             */
/*   Updated: 2024/05/03 15:08:19 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointeur;

	pointeur = (unsigned char *)s;
	while (n--)
	{
		if (*pointeur == (unsigned char)c)
			return (pointeur);
		pointeur++;
	}
	return (0);
}
