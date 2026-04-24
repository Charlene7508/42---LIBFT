#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)src;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		else
			i++;
	}
	return (NULL);
}
