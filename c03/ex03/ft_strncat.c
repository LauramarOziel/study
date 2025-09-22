/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:35:54 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/22 07:40:05 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*original_dest;
	unsigned int	i;

	original_dest = dest;
	while (*dest != '\0')
		dest++;
	i = 0;
	while (i < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
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
	char	dest3[50] = "Start ";
	char	src3[] = "Middle End";
	char	dest4[50] = "Keep ";
	char	src4[] = "";
	char	dest5[50] = "";
	char	src5[] = "From empty";

	printf("Test 1 - nb=3 (smaller than src):\n");
	printf("Before: dest=\"%s\", src=\"%s\", nb=3\n", dest1, src1);
	ft_strncat(dest1, src1, 3);
	printf("After:  dest=\"%s\"\n\n", dest1);

	printf("Test 2 - nb=6 (equal to src length):\n");
	printf("Before: dest=\"%s\", src=\"%s\", nb=6\n", dest2, src2);
	ft_strncat(dest2, src2, 6);
	printf("After:  dest=\"%s\"\n\n", dest2);

	printf("Test 3 - nb=20 (larger than src):\n");
	printf("Before: dest=\"%s\", src=\"%s\", nb=20\n", dest3, src3);
	ft_strncat(dest3, src3, 20);
	printf("After:  dest=\"%s\"\n\n", dest3);

	printf("Test 4 - nb=0 (nothing should be added):\n");
	printf("Before: dest=\"%s\", src=\"%s\", nb=0\n", dest4, src4);
	ft_strncat(dest4, src4, 0);
	printf("After:  dest=\"%s\"\n\n", dest4);

	printf("Test 5 - Empty dest:\n");
	printf("Before: dest=\"%s\", src=\"%s\", nb=4\n", dest5, src5);
	ft_strncat(dest5, src5, 4);
	printf("After:  dest=\"%s\"\n\n", dest5);
	return (0);
}
*/
