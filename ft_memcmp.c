/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:45:30 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/21 17:39:20 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char a[] = {1, 2, 3, 4, 5};
	char b[] = {1, 2, 4, 4, 5};
	char c[] = {1, 2, 3, 4, 5};

	int result;

	result = ft_memcmp(a, b, 5);
	printf("Comparação a vs b: %d\n", result);

	result = ft_memcmp(a, c, 5);
	printf("Comparação a vs c: %d\n", result);

	result = ft_memcmp(b, c, 3);
	printf("Comparação b vs c nos 3 primeiros bytes: %d\n", result);

	return 0;
}
*/
