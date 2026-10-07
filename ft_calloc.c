/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:05:30 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 07:05:30 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)

{
	int *arr = (int *) ft_calloc(6,sizeof(int));
	if (arr)
	{
		for (int i = 0; i <5 ; i++)
		{
			printf("%d ",arr[i]);
		}
		free (arr);
	}
	return (0);
}*/
