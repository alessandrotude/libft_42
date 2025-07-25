/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:23:07 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/23 18:25:18 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d] != '\0' && d < size)
		d++;
	while (src[s] != '\0')
		s++;
	if (d == size)
		return (size + s);
	while (src[i] != '\0' && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d + i < size)
		dest [d + i] = '\0';
	return (d + s);
}
/*
int	main(void)
{
	char dest[10] = "Bem ";
	char src[] = "Vindo";

	ft_strlcat(dest, src, sizeof(dest));
	printf("Nova string: %s\n", dest);
	return (0);
}
*/
