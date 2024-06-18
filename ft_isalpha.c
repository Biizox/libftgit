/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:04:07 by acharvoz          #+#    #+#             */
/*   Updated: 2024/04/25 18:10:33 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
	return (2);
}

/*int	main() 
{
	char caractere = '5';

	if(ft_isalpha(caractere))
		printf("%c est une lettre de l'alphabet.\n", caractere);
	else
		printf("%c n'est pas une lettre de l'alphabet.\n", caractere);
return 0;
}*/
