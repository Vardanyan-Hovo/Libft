/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:20:25 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/19 20:44:21 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	s = (const char *) s1;
	while (*s++ != '\0')
		i++;
	d = malloc(i + 1);
	if (d == NULL)
		return (d);
	s = (char *) s1;
	i = 0;
	while (*s != '\0')
	{
		d[i] = *s++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
