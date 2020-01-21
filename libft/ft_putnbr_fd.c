/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:47:16 by pnita             #+#    #+#             */
/*   Updated: 2019/04/16 21:47:17 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int i;
	unsigned int n2;

	i = 1;
	n2 = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n2 = n * -1;
	}
	else
		n2 = n;
	while (n2 / i / 10 > 0)
		i *= 10;
	while (i > 0)
	{
		ft_putchar_fd(n2 / i + '0', fd);
		n2 = n2 % i;
		i = i / 10;
	}
}
