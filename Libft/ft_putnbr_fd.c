/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:44 by hvardany          #+#    #+#             */
/*   Updated: 2022/03/29 19:16:38 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	l;
	char			s[1];

	if (fd == 0)
		return ;
	if (n < 0)
	{
		write (fd, "-", 1);
		l = -n;
	}
	else
		l = (unsigned int) n;
	if (l > 9)
		ft_putnbr_fd(l / 10, fd);
	s[0] = l % 10 + '0';
	write (fd, &s[0], 1);
}
