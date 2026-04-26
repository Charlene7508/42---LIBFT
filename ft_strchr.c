/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:41:24 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:41:31 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
int	main(void)
{
    char str_c[] = "Bonjour";
    char *result_chr;

    printf("Cas : caractere present\n");
    result_chr = ft_strchr(str_c, 'j');
    printf("Attendu : jour\n");
    printf("Obtenu  : %s\n", result_chr);

    printf("Cas : recherche du \\0\n");
    result_chr = ft_strchr(str_c, '\0');
    printf("Attendu : adresse\n");
    printf("Obtenu  : %p\n", (void *)result_chr);
	
    return(0);
}*/
