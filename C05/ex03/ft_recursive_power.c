/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:04:29 by chquinta          #+#    #+#             */
/*   Updated: 2023/10/13 18:12:51 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power (nb, power - 1));
	}
	else
	{
		return (0);
	}
}
/*
#include<stdio.h>
int main()
{
    printf("%d", ft_recursive_power(2 ,3));

}
*/
