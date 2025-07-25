/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:22:04 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/18 13:58:52 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int main()
{
	char test_chars[] = {'a', 'Z', '5', '#', ' ', 'm', '0', '*', '9', '\0'};
	size_t i = 0;

	while (test_chars[i] != '\0')
	{
		printf("ft_isalnum('%c') = %d\n", test_chars[i], ft_isalnum(test_chars[i]));
		i++;
	}

	return 0;
}
*/
