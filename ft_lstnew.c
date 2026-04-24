#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*node;
	
	printf("Cas : contenu normal\n");
    node = ft_lstnew("Bonjour");
    printf("Attendu : content = Bonjour / next = (nil)\n");
    printf("Obtenu  : content = %s / next = %p\n",
        (char *)node->content, (void *)node->next);
    free(node);

    printf("Cas : contenu NULL\n");
    node = ft_lstnew(NULL);
    printf("Attendu : content = (nil) / next = (nil)\n");
    printf("Obtenu  : content = %p / next = %p\n",
        node->content, (void *)node->next);
    free(node);
	
   	return(0);
}*/