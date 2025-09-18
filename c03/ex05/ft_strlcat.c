/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:51:42 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/18 01:43:20 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("=== Test 1: Normal concatenation ===\n");
	char dest1[20] = "Hello ";
	char src1[] = "World!";
	printf("Before: dest=\"%s\", src=\"%s\", size=20\n", dest1, src1);
	unsigned int result1 = ft_strlcat(dest1, src1, 20);
	printf("After:  dest=\"%s\"\n", dest1);
	printf("Return: %u (total length that would result)\n\n", result1);

	printf("=== Test 2: Limited buffer size ===\n");
	char dest2[10] = "Hello ";
	char src2[] = "World!";
	printf("Before: dest=\"%s\", src=\"%s\", size=10\n", dest2, src2);
	unsigned int result2 = ft_strlcat(dest2, src2, 10);
	printf("After:  dest=\"%s\"\n", dest2);
	printf("Return: %u (total length that would result)\n\n", result2);

	printf("=== Test 3: Very small buffer ===\n");
	char dest3[8] = "Hello ";
	char src3[] = "World!";
	printf("Before: dest=\"%s\", src=\"%s\", size=8\n", dest3, src3);
	unsigned int result3 = ft_strlcat(dest3, src3, 8);
	printf("After:  dest=\"%s\"\n", dest3);
	printf("Return: %u (total length that would result)\n\n", result3);

	printf("=== Test 4: Size = current dest length ===\n");
	char dest4[10] = "Hello ";
	char src4[] = "World!";
	printf("Before: dest=\"%s\", src=\"%s\", size=6\n", dest4, src4);
	unsigned int result4 = ft_strlcat(dest4, src4, 6);
	printf("After:  dest=\"%s\"\n", dest4);
	printf("Return: %u (size + src_len when no space)\n\n", result4);

	printf("=== Test 5: Empty source ===\n");
	char dest5[20] = "Hello ";
	char src5[] = "";
	printf("Before: dest=\"%s\", src=\"%s\", size=20\n", dest5, src5);
	unsigned int result5 = ft_strlcat(dest5, src5, 20);
	printf("After:  dest=\"%s\"\n", dest5);
	printf("Return: %u\n\n", result5);

	printf("=== Test 6: Empty destination ===\n");
	char dest6[20] = "";
	char src6[] = "Hello";
	printf("Before: dest=\"%s\", src=\"%s\", size=20\n", dest6, src6);
	unsigned int result6 = ft_strlcat(dest6, src6, 20);
	printf("After:  dest=\"%s\"\n", dest6);
	printf("Return: %u\n\n", result6);

	printf("=== Test 7: Size = 0 ===\n");
	char dest7[10] = "Hello";
	char src7[] = "World";
	printf("Before: dest=\"%s\", src=\"%s\", size=0\n", dest7, src7);
	unsigned int result7 = ft_strlcat(dest7, src7, 0);
	printf("After:  dest=\"%s\" (unchanged)\n", dest7);
	printf("Return: %u (0 + src_len)\n", result7);
	return (0);
}
*/
