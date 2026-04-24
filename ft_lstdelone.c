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
    printf("%s\n", (char *)node->content);  // Hello
	ft_lstdelone(node, del_content);
	printf("noeud libere\n");

   	return(0);
}*/