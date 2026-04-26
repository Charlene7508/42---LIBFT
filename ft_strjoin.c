/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:45:56 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:46:33 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc (sizeof(char) * len);
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, len);
	ft_strlcat(s3, s2, len);
	return (s3);
}

/*
#include <stdio.h>
int	main(void)
{
    char *strj;

    printf("Cas : cas normal\n");
    strj = ft_strjoin("Hello ", "students");
    printf("Attendu : Hello students\n");
    printf("Obtenu  : %s\n", strj);
    free(strj);

    printf("Cas : string s1 vide\n");
    strj = ft_strjoin("", "students");
    printf("Attendu : students\n");
    printf("Obtenu  : %s\n", strj);
    free(strj);

    printf("Cas : string s1 NULL\n");
    strj = ft_strjoin(NULL, "students");
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)strj);
    free(strj);

   return(0);
}*/
