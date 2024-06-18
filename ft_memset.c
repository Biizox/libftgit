/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:57:58 by acharvoz          #+#    #+#             */
/*   Updated: 2024/04/25 22:39:40 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointeur;

	pointeur = (unsigned char *)s;
	while (n--)
		*pointeur++ = (unsigned char)c;
	return (s);
}
