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