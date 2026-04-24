#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == uc)
			return ((char *)&str[i]);
		else
			i++;
	}
	if (uc == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
