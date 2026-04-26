/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:12:05 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:12:46 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste;

	liste = NULL;
	ft_lstadd_front(&liste, ft_lstnew("C"));
	ft_lstadd_front(&liste, ft_lstnew("B"));
	ft_lstadd_front(&liste, ft_lstnew("A"));

	printf("Cas : liste de 3 elements\n");
    printf("Attendu : 3\n");
    printf("Obtenu  : %d\n", ft_lstsize(liste));
    
    printf("Cas : liste vide\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_lstsize(NULL));
	ft_lstclear(&liste, NULL);
   	return(0);
}*/
