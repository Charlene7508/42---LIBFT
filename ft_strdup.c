#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	length;
	char	*new_tab;

	if (src == NULL)
		return (NULL);
	length = ft_strlen(src);
	new_tab = malloc(sizeof(char) * (length + 1));
	if (new_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_tab[i] = src[i];
		i++;
	}
	new_tab[i] = '\0';
	return (new_tab);
}
