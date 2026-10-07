/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 06:59:52 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 06:59:54 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strtemp;

	strtemp = NULL;
	printf("%lu", strlen(strtemp));
	return (0);
}*/
