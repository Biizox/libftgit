/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:21:51 by acharvoz          #+#    #+#             */
/*   Updated: 2024/05/14 21:01:11 by acharvoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nvx;

	nvx = malloc(sizeof(t_list));
	if (nvx == NULL)
		return (NULL);
	nvx->content = content;
	nvx->next = NULL;
	return (nvx);
}
