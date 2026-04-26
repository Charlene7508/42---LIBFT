/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:22:27 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:23:44 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
static void    print_content(void *content)
{
    printf("%s ", (char *)content);
}
	
int	main(void)
{
	t_list	*liste;

	liste = NULL;
	ft_lstadd_front(&liste, ft_lstnew("C"));
	ft_lstadd_front(&liste, ft_lstnew("B"));
	ft_lstadd_front(&liste, ft_lstnew("A"));

	printf("Cas : application sur chaque noeud\n");
	printf("Attendu : A B C\n");
	printf("Obtenu  : ");
        ft_lstiter(liste, print_content);
        printf("\n");
	ft_lstclear(&liste, NULL);

   	return(0);
}*/
