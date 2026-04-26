/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:10:54 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:11:43 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste;
	t_list	*tmp;
	
	liste = NULL;
    ft_lstadd_front(&liste, ft_lstnew("C"));
    ft_lstadd_front(&liste, ft_lstnew("B"));
    ft_lstadd_front(&liste, ft_lstnew("A"));

    printf("Cas : ajout en tete\n");
    printf("Attendu : A B C\n");
    printf("Obtenu  : ");
    tmp = liste;
    while (tmp)
    {
        printf("%s ", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("\n");
    ft_lstclear(&liste, NULL);
	
   	return(0);
}*/
