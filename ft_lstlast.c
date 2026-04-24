#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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

	printf("Cas : dernier element\n");
    printf("Attendu : C\n");
    printf("Obtenu  : %s\n", (char *)ft_lstlast(liste)->content);
    
    printf("Cas : liste NULL\n");
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)ft_lstlast(NULL));
	ft_lstclear(&liste, NULL);
   	return(0);
}*/