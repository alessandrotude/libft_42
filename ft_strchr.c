/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:05:20 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/23 18:11:18 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == '\0')
	{
		if (c == '\0')
			return ((char *)s);
		else
			return (NULL);
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (strchr(s +1, c));
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
