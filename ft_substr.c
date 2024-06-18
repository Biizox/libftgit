/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 03:46:32 by acharvoz          #+#    #+#             */
/*   Updated: 2024/05/13 00:43:09 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	if (s == NULL || len == 0 || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	i = 0;
	while (s[start + i] && i < len)
		i++;
	ptr = (char *)ft_calloc(i + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
