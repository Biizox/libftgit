/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:50:56 by acharvoz          #+#    #+#             */
/*   Updated: 2024/05/13 02:01:54 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	i;

	if (*lil == '\0')
		return ((char *)big);
	while (*big != '\0' && len > 0)
	{
		i = 0;
		while (big[i] == lil[i] && lil[i] != '\0' && i < len)
			i++;
		if (lil[i] == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
