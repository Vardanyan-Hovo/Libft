/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:20:00 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/30 15:47:32 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*sm;

	sm = (t_list *)malloc(sizeof(t_list));
	if (!sm)
		return (NULL);
	sm->content = content;
	sm->next = 0;
	return (sm);
}
