/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:50:18 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/22 19:47:24 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen (s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
			len = s_len - start;
	sub_str = malloc (len + 1);
	if (!sub_str)
		return (NULL);
	ft_strlcpy (sub_str, s + start, len +1);
	return (sub_str);
}
/*
int main(void)
{
    char *original = "Alessandro";
    char *substr;

    // Exemplo 1: pegar substring começando no índice 3, comprimento 4
    substr = ft_substr(original, 3, 4);
    if (substr)
    {
        printf("Substring: %s\n", substr);  // Deve imprimir: "essa"
        free(substr);
    }

    // Exemplo 2: start maior que o tamanho da string
    substr = ft_substr(original, 50, 5);
    if (substr)
    {
        printf("Substring: '%s'\n", substr);
        free(substr);
    }

    // Exemplo 3: len maior que o restante da string
    substr = ft_substr(original, 6, 100);
    if (substr)
    {
        printf("Substring: %s\n", substr);
        free(substr);
    }

    return 0;
}
*/
