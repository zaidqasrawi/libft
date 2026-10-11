/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:05:00 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 07:05:01 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)

{
t_list *n1;
t_list *n2;
t_list *n3;
t_list *current;

int	i;

i = 1;

n1 = ft_lstnew("40");
n2 = ft_lstnew("30");
n3 = ft_lstnew("zaid");

n1->next = n2;

if (!n1 || !n2 || !n3)
	return (1);

ft_lstadd_front(&n1,n3);

current = n1;

while (current)
{
	printf("node %d = %s\n",i, (char *)current->content);
	current = current->next;
	i++;
}
return (0);
}*/
