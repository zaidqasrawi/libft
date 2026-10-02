/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:04:29 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 07:04:29 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pointer;
	size_t				i;

	i = 0;
	pointer = (const unsigned char *)s;
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
