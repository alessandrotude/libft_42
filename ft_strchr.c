/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:05:20 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/30 17:28:29 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	while (*s && *s != cc)
		s++;
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
/*
int main()
{
    const char *texto = "Exemplo de string";
    char *resultado;

    resultado = strchr(texto, 'd');
    if (resultado != NULL)
        printf("Encontrado '%c' em: %s\n", *resultado, resultado);
    else
        printf("Caractere não encontrado\n");

    resultado = strchr(texto, 'x');
    if (resultado != NULL)
        printf("Encontrado '%c' em: %s\n", *resultado, resultado);
    else
        printf("Caractere não encontrado\n");

    resultado = strchr(texto, '\0');
    if (resultado != NULL)
        printf("Encontrado fim da string '\\0' em: %p\n", (void *)resultado);
    else
        printf("Caractere não encontrado\n");

    return 0;
}
*/
