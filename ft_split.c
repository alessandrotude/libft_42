/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:20:40 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/23 15:48:28 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			i++;
		}
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **split, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	fill_split(char **split, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		i++;
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
			i++;
			split[j] = word_dup (s, start, i);
			if (!split[j])
				return (free_all(split, j), 0);
		j++;
		}
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words (s, c);
	split = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!fill_split (split, s, c))
		return (NULL);
	return (split);
}
/*
int	main(void)
{
	char	**result;
	int		i;

	// Teste 1
	printf("Teste 1:\n");
	result = ft_split("hello world from 42", ' ');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("result[%d] = \"%s\"\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	printf("\n");

	// Teste 2
	printf("Teste 2:\n");
	result = ft_split(",,abc,,def,,ghi,,", ',');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("result[%d] = \"%s\"\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	printf("\n");

	// Teste 3
	printf("Teste 3:\n");
	result = ft_split("oneword", ',');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("result[%d] = \"%s\"\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	printf("\n");

	return (0);
}
*/
