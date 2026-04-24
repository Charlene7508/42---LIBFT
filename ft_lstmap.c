#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>
static void    *uppercase_content(void *content)
{
    char    *str;
    char    *new;
    int     i;

    str = (char *)content;
    new = ft_strdup(str);
    i = 0;
    while (new[i])
    {
        new[i] = ft_toupper(new[i]);
        i++;
    }
    return (new);
}
	
int	main(void)
{
	t_list	*liste;
	t_list	*mapped;
	t_list	*mapped2;
	t_list	*tmp;

	liste = NULL;

	printf("Cas : nouvelle liste transformee\n");
    mapped = ft_lstmap(liste, uppercase_content, del_content);
    printf("Attendu : A B C\n");
    printf("Obtenu  : ");
    tmp = mapped;
    while (tmp)
    {
        printf("%s ", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("\n");
    
    printf("Cas : liste NULL\n");
    mapped2 = ft_lstmap(NULL, uppercase_content, del_content);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)mapped2);

	ft_lstclear(&liste, NULL);
	ft_lstclear(&mapped, del_content);

   	return(0);
}*/