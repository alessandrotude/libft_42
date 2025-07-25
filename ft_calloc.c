/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:11:00 by aletude-          #+#    #+#             */
/*   Updated: 2025/07/22 19:47:14 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	value;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc (0));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	value = nmemb * size;
	ptr = malloc(value);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, value);
	return (ptr);
}
/*
int main(void)
{
    size_t i;
    int *array = (int *)ft_calloc(5, sizeof(int));

    if (!array)
    {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Verifica se os valores estão zerados
    for (i = 0; i < 5; i++)
        printf("array[%zu] = %d\n", i, array[i]);

    free(array); // Libera a memória alocada
    return 0;
}
*/
