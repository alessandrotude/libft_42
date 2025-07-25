/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:39:05 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/21 18:46:36 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    const char *to = "Teste da função ft_strdup";
    char *tc = ft_strdup(to);

    if (tc == NULL)
    {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    printf("Texto original: %s\n", to);
    printf("Texto copiado:  %s\n", tc);

    free(tc);  // liberar memória alocada
    return 0;
}
*/
