/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:53:59 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:55:29 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
static void    upper_if_even(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = ft_toupper(*c);
}
int	main(void)
{
    printf("Cas : cas normal\n");
    char str_iteri[] = "hello";
    ft_striteri(str_iteri, upper_if_even);
    printf("Attendu : HeLlO\n");
    printf("Obtenu  : %s\n", str_iteri);
    
    printf("Cas : string vide\n");
    char str_iteri2[] = "";
    ft_striteri(str_iteri2, upper_if_even);
    printf("Attendu : (vide)\n");
    printf("Obtenu  : %s\n", str_iteri2);
    
   return(0);
}*/
