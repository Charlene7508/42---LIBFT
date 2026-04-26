/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:46:43 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:46:51 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
int	main(void)
{
	char *trim;

    printf("Cas : cas normal\n");
    trim = ft_strtrim("###Bonjour###", "#");
    printf("Attendu : Bonjour\n");
    printf("Obtenu  : %s\n", trim);
    free(trim);

    printf("Cas : set vide\n");
    trim = ft_strtrim("Bonjour", "");
    printf("Attendu : Bonjour\n");
    printf("Obtenu  : %s\n", trim);
    free(trim);

    printf("Cas : string vide\n");
    trim = ft_strtrim("", "#");
    printf("Attendu : (vide)\n");
    printf("Obtenu  : %s\n", trim);
    free(trim);

    printf("Cas : s1 NULL\n");
    trim = ft_strtrim(NULL, "#");
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)trim);
    free(trim);

    printf("Cas : set absent de s1\n");
    trim = ft_strtrim("Bonjour", "z");
    printf("Attendu : Bonjour\n");
    printf("Obtenu  : %s\n", trim);
    free(trim);

    return(0);
}*/
