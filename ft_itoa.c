/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:47:41 by acharvoz          #+#    #+#             */
/*   Updated: 2024/05/13 01:44:54 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_numlen(int n)
{
	size_t	taille;

	taille = 1;
	if (n < 0)
	{
		taille++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		taille++;
	}
	return (taille);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	taille;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	taille = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (taille + 1));
	if (!str)
		return (NULL);
	str[taille] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	i = taille - 1;
	while (n >= 10)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	str[i] = n + '0';
	return (str);
}
