/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:58:45 by pnita             #+#    #+#             */
/*   Updated: 2019/04/11 16:58:48 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*z1;
	char	*z2;

	z1 = s1;
	while (*z1 != '\0')
		z1++;
	z2 = (char*)s2;
	while (*z2 != '\0')
	{
		*z1 = *z2;
		z1++;
		z2++;
	}
	*z1 = '\0';
	return (s1);
}
