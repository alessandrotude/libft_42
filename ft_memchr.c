/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:08:46 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/21 15:25:39 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		search;

	i = 0;
	ptr = (unsigned char *) s;
	search = (unsigned char) c;
	while (i < n)
	{
		if (ptr[i] == search)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char data[] = "42 São Paulo";
    char *result;

    // Exemplo 1: procurar o caractere 'S'
    result = ft_memchr(data, 'S', sizeof(data));
    if (result)
        printf("Encontrado 'S' em: %s\n", result);
    else
        printf("Caracter 'S' não encontrado\n");

    // Exemplo 2: procurar o caractere 'z' (não existe)
    result = ft_memchr(data, 'z', sizeof(data));
    if (result)
        printf("Encontrado 'z' em: %s\n", result);
    else
        printf("Caracter 'z' não encontrado\n");

    // Exemplo 3: procurar o byte nulo '\0'
    result = ft_memchr(data, '\0', sizeof(data));
    if (result)
        printf("Encontrado byte nulo '\\0' em posição %ld\n", result - data);
    else
        printf("Byte nulo '\\0' não encontrado\n");

    return 0;
}
*/
