/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:43:04 by acharvoz          #+#    #+#             */
/*   Updated: 2024/05/03 14:48:03 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*der;

	der = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			der = s;
		s++;
	}
	if (der != NULL)
		return ((char *)der);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
