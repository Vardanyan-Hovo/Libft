/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:26:16 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/28 17:02:07 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s;

	j = 0;
	i = 0;
	if (!needle || haystack == needle || len < 0)
		return ((char *)haystack);
	s = ft_strlen(needle);
	while (haystack[i] != '\0' && len > i)
	{
		j = 0;
		while (haystack[i + j] != '\0'
			&& needle[j] == haystack[i + j] && j + i < len)
			j++;
		if (j == s)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
