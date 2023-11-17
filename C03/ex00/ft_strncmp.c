/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:18:08 by chquinta          #+#    #+#             */
/*   Updated: 2023/08/15 15:05:47 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{
	printf("%d\n", strncmp("temperatura", "tempera", 7));
	printf("%d\n", ft_strncmp("temperatura", "tempera", 7));
	printf("%d\n", strncmp("a", "b", 1));
	printf("%d\n", ft_strncmp("a", "b", 1));
	printf("%d\n", ft_strncmp("zzzaaa", "aaaaaa",2 ));
	printf("%d\n", strncmp("zzzaaa", "aaaaaa", 2));
}
*/
