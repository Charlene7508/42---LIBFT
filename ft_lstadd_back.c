/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:14:29 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:18:06 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/*
#include <stdio.h>
int	main(void)
{
    t_list	*liste2;
    t_list	*tmp;

    liste2 = NULL;
    ft_lstadd_back(&liste2, ft_lstnew("A"));
    ft_lstadd_back(&liste2, ft_lstnew("B"));
    ft_lstadd_back(&liste2, ft_lstnew("C"));

    printf("Cas : ajout en queue\n");
    printf("Attendu : A B C\n");
    printf("Obtenu  : ");
    tmp = liste2;
    while (tmp)
    {
        printf("%s ", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("\n");
    ft_lstclear(&liste2, NULL);

   return(0);
}*/
