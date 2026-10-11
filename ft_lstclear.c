/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:04:56 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/04 13:41:46 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
/*
void	delete_node(void *content)
{
	free(content);
}
int main ()
{
t_list *head;
t_list *temp;
t_list *n2;
t_list *n3;
int i = 1;

head = ft_lstnew(ft_strdup("First"));
n2 = ft_lstnew(ft_strdup("Second"));
n3 = ft_lstnew(ft_strdup("Third"));
head->next = n2;
n2->next =n3;
temp = head;
while (temp)
{
	printf("node %d, = %s\n",i, (char *)temp->content);
	temp = temp->next;
	i++;
}

ft_lstclear(&head,delete_node);

if (head == NULL)
	printf("success deletion");
else
	printf("failed deletion");
}*/
