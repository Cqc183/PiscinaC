/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:12:03 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/17 16:03:29 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_range(int min, int max)
{
	int	i;
	int	*p;

	if (min >= max)
		return (0);
	p = malloc(max - min);
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_ultimate_range(int **range, int min, int max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
