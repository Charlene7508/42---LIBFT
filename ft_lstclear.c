/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:20:06 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:22:17 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}

/*
#include <stdio.h>
static void    del_content(void *content)
{
    free(content);
}
	
int	main(void)
{
    t_list	*liste3;

    printf("Cas : suppression de toute la liste\n");
    liste3 = NULL;
    ft_lstadd_back(&liste3, ft_lstnew(ft_strdup("A")));
    ft_lstadd_back(&liste3, ft_lstnew(ft_strdup("B")));
    ft_lstadd_back(&liste3, ft_lstnew(ft_strdup("C")));
    printf("Attendu : taille avant = 3 / apres = (nil)\n");
    printf("Obtenu  : taille avant = %d / ", ft_lstsize(liste3));
    ft_lstclear(&liste3, del_content);
    printf("apres = %p\n", (void *)liste3);

    return(0);
}*/
