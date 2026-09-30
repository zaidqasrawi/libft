/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:06:58 by zabdulja          #+#    #+#             */
/*   Updated: 2026/09/30 16:06:59 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pointer;
	size_t				i;

	pointer = (const unsigned char *)s;
	if (pointer == NULL)
		return (NULL);
	while (i < n)
	{
		if (pointer[i] == (unsigned char)c)
			return ((void *)pointer + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

		char str[] = "Zaid Qasrawi";
		char *res1 = ft_memchr(str, 'Q', 11);
		//char *res2 = memchr(str, 'm', 11);
		if (res1 != NULL)
			printf("ft_memchr %ld\n", res1 - str);
		else
			printf("ft_memchr %d\n" , -1);

}*/
