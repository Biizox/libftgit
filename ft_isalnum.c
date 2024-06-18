/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:43:49 by acharvoz          #+#    #+#             */
/*   Updated: 2024/04/25 18:33:08 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*int   main()
{
	char caractere = '5';

	if(ft_isalnum(caractere))
		printf("%c est un chiffre ou une lettre.\n", caractere);
	else
		printf("%c n'est pas un chiffre ni une lettre.\n", caractere);
	return 0;
}*/
