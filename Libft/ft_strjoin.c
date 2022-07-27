/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:18:08 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/25 14:19:42 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sm;
	size_t	n;
	size_t	l;
	size_t	i;

	n = ft_strlen(s1);
	l = ft_strlen(s2);
	sm = (char *)malloc(sizeof(char) * (n + l + 1));
	if (!sm)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		sm[i] = *s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		sm[i] = *s2++;
		i++;
	}
	sm[i] = 0;
	return (sm);
}
