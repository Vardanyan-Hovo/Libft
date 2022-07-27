/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:10:53 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/19 13:52:34 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		cc;
	const char	*ss;

	ss = s;
	cc = (char) c;
	if (n == 0)
		return (NULL);
	while (n-- > 0)
	{
		if (*ss == cc)
		{
			return ((void *)ss);
		}
		ss++;
	}
	return (NULL);
}
