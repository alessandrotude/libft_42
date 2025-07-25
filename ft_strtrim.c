/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:37:26 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/23 15:43:12 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cut_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && c_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && c_in_set (s1[end -1], set))
		end--;
	cut_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!cut_str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		cut_str[i] = s1[start];
		i++;
		start++;
	}
	cut_str[i] = '\0';
	return (cut_str);
}
/*
int	main(void)
{
	char *s1 = "   ---Hello, World!!!---   ";
	char *set = " -!";
	char *result = ft_strtrim(s1, set);

	if (result)
	{
		printf("Original: \"%s\"\n", s1);
		printf("Trimmed:  \"%s\"\n", result);
		free(result);
	}
	else
	{
		printf("Erro ao alocar memória.\n");
	}
	return (0);
}
*/
