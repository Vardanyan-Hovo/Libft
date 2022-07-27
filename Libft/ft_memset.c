/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:17:54 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/20 14:57:54 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			*s;
	unsigned char	k;

	k = (unsigned char) c;
	if (b == NULL)
		return (0);
	s = (char *)b;
	while (len > 0)
	{
		*s = k;
		s++;
		len--;
	}
	return (b);
}
