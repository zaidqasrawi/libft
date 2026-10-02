/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:08:24 by zabdulja          #+#    #+#             */
/*   Updated: 2026/09/30 18:51:48 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	*strtemp;
	char	*strtemp1;
	int		s;

	strtemp = NULL;
	strtemp1 = NULL;
	s = strlen(strtemp);
	return (0);
}*/
