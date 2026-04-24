#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = value;
		i++;
	}
	return (ptr);
}
