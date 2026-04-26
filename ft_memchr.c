/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:42:12 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:42:38 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			return (&p[i]);
		else
			i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
    char str_memchr[] = "Bonjour";
    void *result_memchr;

    printf("Cas : caractere present\n");
    result_memchr = ft_memchr(str_memchr, 'j', 7);
    printf("Attendu : jour\n");
    printf("Obtenu  : %s\n", (char *)result_memchr);
    
    printf("Cas : caractere absent\n");
    result_memchr = ft_memchr(str_memchr, 'z', 7);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", result_memchr);

   return(0);
}*/
