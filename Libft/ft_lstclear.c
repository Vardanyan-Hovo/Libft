/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:24:36 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/30 22:01:08 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*s;

	if (!lst || *lst == NULL)
		return ;
	while (*lst)
	{
		s = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = s;
	}
}
