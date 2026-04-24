#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		*sub;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && is_in_set(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set) == 1)
		end--;
	len = end - start;
	sub = ft_substr(s1, start, len);
	return (sub);
}
