/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:43:17 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/23 18:09:37 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		if (s[len - 1] == (char) c)
			return ((char *)s + len - 1);
		len--;
	}
	return (NULL);
}

/*
int main(void)
{
    const char *texto = "exemplo de string";
    char caractere = 'e';
    char *resultado;

    resultado = strrchr(texto, caractere);

    if (resultado != NULL)
    {
        printf("caractere '%c' encontrada na posição: %ld\n");
        printf("Substring a partir dessa posição: \"%s\"\n", resultado);
    }
    else
    {
        printf("Caractere '%c' não encontrado na string.\n", caractere);
    }
    resultado = strrchr(texto, '\0');
    printf("Posição do caractere nulo '\\0': %ld\n", resultado - texto);

    resultado = strrchr(texto, 'z');
    if (resultado == NULL)
        printf("Caractere 'z' não encontrado na string.\n");

    return 0;
}
*/
