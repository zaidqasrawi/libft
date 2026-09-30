/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:07:18 by zabdulja          #+#    #+#             */
/*   Updated: 2026/09/30 18:50:35 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[];
	char	string2[];

	string1[] = "abcdefgh";
	string2[] = "abcdefgh";
	ft_memmove(string1 + 2, string1, 5);
	memmove(string2 + 2, string2, 5);
	printf("if destination is bigger than source 'overlapping' :\n");
	printf("  ft_memmove: [%s]\n", string1);
	printf("  memmove:    [%s]\n", string2);
	return (0);
}*/
