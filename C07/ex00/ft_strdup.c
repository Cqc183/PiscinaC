/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:55:22 by chquinta          #+#    #+#             */
/*   Updated: 2023/10/29 14:10:12 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = (char *)malloc((ft_strlen(src) + 1) * sizeof (char)));
	ft_strcpy(new, src);
	return (new);
}
/*
#include <stdio.h>

#include <string.h>
#include <unistd.h>

int main()
{
char *original;
original = "hello World";

char *copia;
copia = ft_strdup(original);

if (copia != NULL)
{
	printf("Alocação da palavra %s realizada com sucesso", original);

}
else
{
	printf("%s", "erro");
}
}
*/
