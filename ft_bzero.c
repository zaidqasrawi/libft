/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:05:34 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 07:05:34 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "Hello zaid";

	ft_bzero(s, 3);
	for (int i = 0; i < 10; i++)
	{
		printf("%c", s[i]);
	}
	return (0);
}*/
