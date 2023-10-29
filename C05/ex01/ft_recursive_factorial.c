/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:16:27 by chquinta          #+#    #+#             */
/*   Updated: 2023/08/16 15:03:28 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(5));
}
*/
