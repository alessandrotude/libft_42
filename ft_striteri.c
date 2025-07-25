/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:42:15 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/23 16:49:25 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	to_upper(unsigned int i, char *c)
{
	(void)i; // Ignora o índice (não é usado aqui)
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	str[] = "hello, 42!";

	printf("Antes: %s\n", str);
	ft_striteri(str, to_upper);
	printf("Depois: %s\n", str);

	return (0);
}
*/
