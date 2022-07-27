/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:14:33 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/28 17:45:34 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sm;
	size_t	l;

	if (ft_strlen(s) < start)
	{
		sm = malloc(sizeof(char));
		sm[0] = '\0';
		return (sm);
	}
	l = ft_strlen(s + start);
	if (l < len)
		len = l;
	sm = malloc(len + 1);
	if (!sm)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
		if (start <= i && j < len)
			sm[j++] = s[i];
	sm[j] = 0;
	return (sm);
}
