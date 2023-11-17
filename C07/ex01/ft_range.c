/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:12:03 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/17 15:38:18 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int min, int max)
{
        int     i;
        int     *p;

        i = 0;
        if (min >= max)
                return (0);
        p = malloc(max - min);
        if (p == NULL)
                return (0);
        i = 0;
        while (min < max)
        {
                p[i] = min;
                min++;
                i++;
        }
        return (p);
}
/*
#include<stdio.h>
int main()
{
        int min = 1;
        int max = 11;
        int *test0;

        test0 = ft_range(11,11);

        for (int i = 0; i < (max - min); i++)
    {
        printf("%d ", test0[i]);
    }

    // Don't forget to free the allocated memory
    free(test0);

    return 0;
}
*/
