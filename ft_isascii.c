/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:25:54 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/18 14:03:53 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	int test_vals[] = {-1, 0, 65, 127, 128, 255, '\n', 50};
	size_t i = 0;
	size_t len = sizeof(test_vals) / sizeof(test_vals[0]);

	while (i < len)
	{
		printf("ft_isascii(%d) = %d\n", test_vals[i], ft_isascii(test_vals[i]));
		i++;
	}

	return 0;
}
*/
