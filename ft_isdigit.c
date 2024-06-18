/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:29:21 by acharvoz          #+#    #+#             */
/*   Updated: 2024/04/25 18:11:36 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int   main()
{
	char caractere = '5';

	if(ft_isdigit(caractere))
		printf("%c est un chiffre.\n", caractere);
	else
		printf("%c n'est pas un chiffre.\n", caractere);
return 0;
}*/
