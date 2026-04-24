#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*extract_word(const char *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_tab(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	fill_tab(char **tab, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			tab[i] = extract_word(s, c);
			if (tab[i] == NULL)
				return (i);
			while (*s != c && *s != '\0')
				s++;
			i++;
		}
	}
	tab[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**new_tab;
	int		nb_words;
	int		err;

	if (s == NULL)
		return (NULL);
	nb_words = count_words(s, c);
	new_tab = malloc(sizeof(char *) * (nb_words + 1));
	if (new_tab == NULL)
		return (NULL);
	err = fill_tab(new_tab, s, c);
	if (err != 0)
	{
		free_tab(new_tab, err);
		return (NULL);
	}
	return (new_tab);
}

/*
#include <stdio.h>
int	main(void)
{
	char **spl;
    int i;

    printf("Cas : cas normal\n");
    spl = ft_split("Hello world !!", ' ');
    printf("Attendu : Hello / world / !!\n");
    printf("Obtenu  : ");
    i = 0;
    while (spl[i] != NULL)
    {
        printf("%s", spl[i]);
        if (spl[i + 1] != NULL)
            printf(" / ");
        i++;
    }
    printf("\n");
    i = 0;
    while (spl[i] != NULL)
        free(spl[i++]);
    free(spl);

    printf("Cas : delimiteurs consecutifs\n");
    spl = ft_split("Hello   world", ' ');
    printf("Attendu : Hello / world\n");
    printf("Obtenu  : ");
    i = 0;
    while (spl[i] != NULL)
    {
        printf("%s", spl[i]);
        if (spl[i + 1] != NULL)
            printf(" / ");
        i++;
    }
    printf("\n");
    i = 0;
    while (spl[i] != NULL)
        free(spl[i++]);
    free(spl);

    printf("Cas : string vide\n");
    spl = ft_split("", ' ');
    printf("Attendu : (tableau vide)\n");
    printf("Obtenu  : ");
    i = 0;
    while (spl[i] != NULL)
    {
        printf("%s", spl[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (spl[i] != NULL)
        free(spl[i++]);
    free(spl);

   return(0);
}*/