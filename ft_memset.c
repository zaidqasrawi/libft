/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:03:53 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 07:03:53 by zabdulja         ###   ########.fr       */
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
