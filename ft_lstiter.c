/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:04:48 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 07:04:49 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void times_two (void *content)
{
*(int *)content = *(int *)content * 2;
}
int main(void)
{

t_list *head;

int val1 = 50;
int val2 = 30;
int val3 = 10;
int i = 1;
head = ft_lstnew(&val1);
head->next = ft_lstnew(&val2);
head->next->next = ft_lstnew(&val3);

ft_lstiter(head,times_two);

while (head)
{
printf ("node %d after applying function = %d",i, *(int *)head->content);
i++;
head = head->next;
}
return (0);
}*/
