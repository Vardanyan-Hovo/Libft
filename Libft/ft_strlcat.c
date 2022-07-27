/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:38:58 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/20 17:47:39 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		b;
	char		*ds;
	const char	*ss;

	ss = src;
	ds = dst;
	i = 0;
	if (dstsize <= ft_strlen(ds))
		return (dstsize + ft_strlen(ss));
	i = ft_strlen(ds);
	b = 0;
	while (ss[b] != '\0' && i + 1 < dstsize)
	{
		ds[i] = ss[b];
		i++;
		b++;
	}
	ds[i] = '\0';
	return (ft_strlen(ds) + ft_strlen(&ss[b]));
}
