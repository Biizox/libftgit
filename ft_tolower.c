/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:14:52 by acharvoz          #+#    #+#             */
/*   Updated: 2024/04/25 20:25:11 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
