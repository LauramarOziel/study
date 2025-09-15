/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:45:01 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 07:49:51 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*original_dest;
	unsigned int	i;

	original_dest = dest;
	i = 0;
	while (i < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (original_dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	origem[] = "Hello";
	char	destino[10];

	ft_strncpy(destino, origem, 3);
	destino[3] = '\0';
	printf("Original: %s\n", origem);
	printf("Copiado:  %s\n", destino);
	return (0);
}
*/
