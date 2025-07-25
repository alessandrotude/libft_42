/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:58:04 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/21 20:07:58 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int main()
{
	char str[] = "Hello, world!";
	size_t i = 0;
	size_t len = sizeof(str);

	printf("Antes de ft_bzero: %s\n", str);

	ft_bzero(str, len);

	printf("Depois de ft_bzero: ");
	while (i < len)
	{
		printf("%d ", (unsigned char)str[i]);
		i++;
	}
	printf("\n");

	return 0;
}
*/
