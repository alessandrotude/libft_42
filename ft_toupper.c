/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:40:00 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/18 14:56:13 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int main()
{
    char c1 = 'a';
    char c2 = 'b';
    char c3 = 'z';
    char c4 = 'A';
    char c5 = '2';

    printf("'%c' -> '%c'\n", c1, ft_toupper(c1));
    printf("'%c' -> '%c'\n", c2, ft_toupper(c2));
    printf("'%c' -> '%c'\n", c3, ft_toupper(c3));
    printf("'%c' -> '%c'\n", c4, ft_toupper(c4));
    printf("'%c' -> '%c'\n", c5, ft_toupper(c5));

    return 0;
}
*/
