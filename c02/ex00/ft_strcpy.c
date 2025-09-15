/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:10:46 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:06:18 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (original_dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "42 Rio";
	char	dest[20];

	ft_strcpy(dest, source);
	printf("Source: %s\n", source);
	printf("Copied: %s\n", dest);
	return (0);
}
*/
