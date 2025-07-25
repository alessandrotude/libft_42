/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:45:16 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/18 14:55:53 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int main()
{
    char c1 = 'A';
    char c2 = 'b';
    char c3 = 'Z';
    char c4 = 'a';
    char c5 = '2';

    printf("'%c' -> '%c'\n", c1, ft_tolower(c1));
    printf("'%c' -> '%c'\n", c2, ft_tolower(c2));
    printf("'%c' -> '%c'\n", c3, ft_tolower(c3));
    printf("'%c' -> '%c'\n", c4, ft_tolower(c4));
    printf("'%c' -> '%c'\n", c5, ft_tolower(c5));

    return 0;
}
*/
