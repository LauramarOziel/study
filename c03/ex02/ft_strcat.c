/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:29:15 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/22 07:27:30 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest1[50] = "Hello ";
	char	src1[] = "World!";
	char	dest2[50] = "42 ";
	char	src2[] = "School";
	char	dest3[50] = "";
	char	src3[] = "Empty start";
	char	dest4[50] = "Keep ";
	char	src4[] = "";

	printf("Test 1 - Normal concatenation:\n");
	printf("Before: dest=\"%s\", src=\"%s\"\n", dest1, src1);
	ft_strcat(dest1, src1);
	printf("After:  dest=\"%s\"\n\n", dest1);

	printf("Test 2 - Numbers and letters:\n");
	printf("Before: dest=\"%s\", src=\"%s\"\n", dest2, src2);
	ft_strcat(dest2, src2);
	printf("After:  dest=\"%s\"\n\n", dest2);

	printf("Test 3 - Empty destination:\n");
	printf("Before: dest=\"%s\", src=\"%s\"\n", dest3, src3);
	ft_strcat(dest3, src3);
	printf("After:  dest=\"%s\"\n\n", dest3);

	printf("Test 4 - Empty source:\n");
	printf("Before: dest=\"%s\", src=\"%s\"\n", dest4, src4);
	ft_strcat(dest4, src4);
	printf("After:  dest=\"%s\"\n\n", dest4);
	return (0);
}
*/
