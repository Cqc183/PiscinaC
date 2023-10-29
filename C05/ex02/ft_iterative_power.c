/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:04:29 by chquinta          #+#    #+#             */
/*   Updated: 2023/10/13 14:54:07 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if ((nb == 0) && (power == 0))
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i <= power)
		{
			res *= nb;
			i++;
		}
		return (res);
	}
}
/*
#include<stdio.h>
int main()
{
    printf("%d", ft_iterative_power(2 ,3));

}
*/
