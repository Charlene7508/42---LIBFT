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