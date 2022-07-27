/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:29:40 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/20 17:38:23 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;

	d = dst;
	s = src;
	n = 0;
	if (!dst || !src)
		return (0);
	if (dstsize > 0)
	{
		while ((n < dstsize - 1) && s[n] != '\0')
		{
			d[n] = s[n];
			n++;
		}
		d[n] = '\0';
	}
	return (ft_strlen(src));
}
