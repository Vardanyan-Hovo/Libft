/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:15:41 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/29 13:50:22 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static size_t	my1func(char const *s1, char const *s2)
{
	size_t	j;
	int		l;
	size_t	i;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		l = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				l = 1;
			j++;
		}
		if (l == 1)
			i++;
		else
			return (i);
	}
	return (i);
}

static size_t	my2func(char const *s1, char const *s2, size_t n, size_t k)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = n - 1;
	while (i > k && i < n && s1[i])
	{
		j = 0;
		l = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
				l = 1;
			j++;
		}
		if (l == 1)
			i--;
		else
			return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sm;
	size_t	n;
	size_t	i;
	size_t	k;
	size_t	l;

	k = 0;
	n = ft_strlen(s1);
	k = my1func(s1, set);
	i = my2func(s1, set, n, k);
	l = 0;
	if (i >= k)
		sm = (char *)malloc(sizeof(char) * (i - k + 2));
	else
		sm = malloc(sizeof(char) * 1);
	if (!sm)
		return (NULL);
	while (k <= i && s1[k])
	{
		sm[l] = s1[k];
		l++;
		k++;
	}
	sm[l] = 0;
	return (sm);
}
