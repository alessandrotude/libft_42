/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:51:53 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/23 16:15:41 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	num = n;
	len = count(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int main(void)
{
	printf("ft_itoa(0) = %s\n", ft_itoa(0));
	printf("ft_itoa(123) = %s\n", ft_itoa(123));
	printf("ft_itoa(-456) = %s\n", ft_itoa(-456));
	printf("ft_itoa(INT_MAX) = %s\n", ft_itoa(INT_MAX));
	printf("ft_itoa(INT_MIN) = %s\n", ft_itoa(INT_MIN));
	return 0;
}
*/
