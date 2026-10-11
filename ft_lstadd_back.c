/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulja <zabdulja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 07:05:04 by zabdulja          #+#    #+#             */
/*   Updated: 2026/10/02 07:05:04 by zabdulja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main(void)
{
    t_list  *n1;
    t_list  *n2;
    t_list  *n3;
    t_list  *current;
    int     i;

    i = 1;

    n1 = ft_lstnew("50");
    n2 = ft_lstnew("40");
    n3 = ft_lstnew("zaid");

    if (!n1 || !n2 || !n3)
        return (1);

    n1->next = n2;
    n2->next = NULL;

    ft_lstadd_back(&n1, n3);

    current = n1;
    while (current)
    {
        printf("Node %d : %s\n", i, (char *)current->content);
        current = current->next;
        i++;
    }

    free(n1);
    free(n2);
    free(n3);

    return (0);

}*/
