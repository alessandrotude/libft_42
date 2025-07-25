/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:57:19 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/18 14:56:31 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
int main(void)
{
    char src[] = "Olá, mundo!";
    char dest[8];  // Buffer menor que a src para testar truncamento
    size_t ret;

    ret = ft_strlcpy(dest, src, sizeof(dest));

    printf("String original: '%s'\n", src);
    printf("String copiada: '%s'\n", dest);
    printf("Retorno (tamanho da src): %zu\n", ret);

    if (ret >= sizeof(dest))
        printf("A string foi truncada!\n");
    else
        printf("Cópia completa!\n");

    return 0;
}
*/
