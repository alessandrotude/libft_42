/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:08:06 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/18 13:59:56 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main()
{
	char chars[] = {'a', 'Z', '5', '#', 'm', ' ', 'B', '0', '*', '\0'};
	size_t i = 0;

	while (chars[i] != '\0')
	{
		printf("ft_isalpha('%c') = %d\n", chars[i], ft_isalpha(chars[i]));
		i++;
	}

	return 0;
}
*/
