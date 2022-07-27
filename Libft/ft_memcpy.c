/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:11:38 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/15 13:15:17 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d != s)
	{
		if (d < s)
		{
			while (n--)
			{
				*d++ = *s++;
			}
		}
		else
		{
			d = d + n - 1;
			s = s + n - 1;
			while (n--)
			{
				*d-- = *s--;
			}
		}
	}
	return (dst);
}
