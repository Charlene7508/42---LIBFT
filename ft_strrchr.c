/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:41:43 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:41:46 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (str[len] == (unsigned char)c)
			return ((char *)&str[len]);
		else
			len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char str_chrr[] = "Bonjour Bruno";
	char *result_chrr;

    	result_chrr = ft_strrchr(str_chrr, 'B');
   	printf("Attendu : Bruno\n");
    	printf("Obtenu  : %s\n", result_chrr);

   	return(0);
}*/
