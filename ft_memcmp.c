/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:34:49 by acharvoz          #+#    #+#             */
/*   Updated: 2024/05/03 15:08:24 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pointeur1;
	const unsigned char	*pointeur2;

	pointeur1 = (const unsigned char *)s1;
	pointeur2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*pointeur1 != *pointeur2)
			return (*pointeur1 - *pointeur2);
		pointeur1++;
		pointeur2++;
	}
	return (0);
}
