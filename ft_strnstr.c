/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:17:27 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/21 18:13:00 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (little[0] == '\0')
		return ((char *)big);
	b = 0;
	while (b < len && big[b] != '\0')
	{
		l = 0;
		while ((b + l) < len && big[b + l] == little[l] && little[l] != '\0')
		l++;
		if (little[l] == '\0')
			return ((char *)&big[b]);
	b++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*text = "42 São Paulo é incrível!";
	const char	*find = "São";
	const char	*result;

	result = ft_strnstr(text, find, 20);
	if (result != NULL)
		printf("Substring encontrada: \"%s\"\n", result);
	else
		printf("Substring não encontrada.\n");

	return (0);
}
*/
