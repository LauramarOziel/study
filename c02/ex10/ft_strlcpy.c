/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:07:28 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 09:54:15 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World";
	char	dest1[20];
	char	dest2[6];
	char	dest3[1];
	unsigned int	result;

	printf("Source string: '%s' (length: %d)\n\n", src, 11);
	result = ft_strlcpy(dest1, src, 20);
	printf("Large buffer (size=20):\n");
	printf("Copied: '%s'\n", dest1);
	printf("Return: %u\n\n", result);
	result = ft_strlcpy(dest2, src, 6);
	printf("Small buffer (size=6):\n");
	printf("Copied: '%s'\n", dest2);
	printf("Return: %u\n\n", result);
	result = ft_strlcpy(dest3, src, 1);
	printf("Minimal buffer (size=1):\n");
	printf("Copied: '%s'\n", dest3);
	printf("Return: %u\n", result);
	return (0);
}
*/
