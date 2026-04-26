/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:18:24 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:19:51 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
static void    del_content(void *content)
{
    free(content);
}
	
int	main(void)
{
	t_list	*node;

    printf("Cas : suppression d'un noeud\n");
    node = ft_lstnew(ft_strdup("Hello"));
    printf("%s\n", (char *)node->content);
    ft_lstdelone(node, del_content);
    printf("noeud libere\n");
    
    return(0);
}*/
