/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:04:01 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/04 13:12:39 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{

		char src[] = "Hello, World!";
		char dst1[20] = {0};
		char dst2[20] = {0};
		char *d = "";
		char *s = "";
		//ft_memcpy(s, src, 13);
		memcpy(NULL, NULL, 1);

		printf("  ft_memcpy: [%s]\n", d);
}*/
