/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:14:15 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/21 18:37:19 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	neg;

	n = 0;
	neg = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		neg = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		n *= 10;
		n += *nptr - '0';
		nptr++;
	}
	return (n * neg);
}
/*
int main(void)
{
	printf("Teste 1: '%s' -> %d\n", "42", ft_atoi("42"));
	printf("Teste 2: '%s' -> %d\n", "   -42", ft_atoi("   -42"));
	printf("Teste 3: '%s' -> %d\n", "+123", ft_atoi("+123"));
	printf("Teste 4: '%s' -> %d\n", "0", ft_atoi("0"));
	printf("Teste 5: '%s' -> %d\n", "987abc", ft_atoi("987abc"));
	printf("Teste 6: '%s' -> %d\n", "  +007", ft_atoi("  +007"));
	printf("Teste 7: '%s' -> %d\n", " -2147483648", ft_atoi(" -2147483648"));
	printf("Teste 8: '%s' -> %d\n", "2147483647", ft_atoi("2147483647"));
	printf("Teste 9: '%s' -> %d\n", "abc123", ft_atoi("abc123"));

	return 0;
}
*/
