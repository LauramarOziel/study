/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:28:09 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/17 09:32:02 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "Hello Universe";
	char	str3[] = "Hell";
	char	str4[] = "Hello World";
	char	str5[] = "";
	char	str6[] = "Test";

	printf("Test 1 - First 5 characters (equal):\n");
	printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str2, ft_strncmp(str1, str2, 5));
	printf("strncmp(\"%s\", \"%s\", 5) = %d\n\n", str1, str2, strncmp(str1, str2, 5));

	printf("Test 2 - First 7 characters (different):\n");
	printf("ft_strncmp(\"%s\", \"%s\", 7) = %d\n", str1, str2, ft_strncmp(str1, str2, 7));
	printf("strncmp(\"%s\", \"%s\", 7) = %d\n\n", str1, str2, strncmp(str1, str2, 7));

	printf("Test 3 - n = 0:\n");
	printf("ft_strncmp(\"%s\", \"%s\", 0) = %d\n", str1, str2, ft_strncmp(str1, str2, 0));
	printf("strncmp(\"%s\", \"%s\", 0) = %d\n\n", str1, str2, strncmp(str1, str2, 0));

	printf("Test 4 - One string shorter than n:\n");
	printf("ft_strncmp(\"%s\", \"%s\", 10) = %d\n", str3, str1, ft_strncmp(str3, str1, 10));
	printf("strncmp(\"%s\", \"%s\", 10) = %d\n\n", str3, str1, strncmp(str3, str1, 10));

	printf("Test 5 - Identical strings:\n");
	printf("ft_strncmp(\"%s\", \"%s\", 20) = %d\n", str1, str4, ft_strncmp(str1, str4, 20));
	printf("strncmp(\"%s\", \"%s\", 20) = %d\n\n", str1, str4, strncmp(str1, str4, 20));

	printf("Test 6 - Empty string:\n");
	printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str5, str6, ft_strncmp(str5, str6, 5));
	printf("strncmp(\"%s\", \"%s\", 5) = %d\n\n", str5, str6, strncmp(str5, str6, 5));

	printf("Test 7 - Large n value:\n");
	printf("ft_strncmp(\"%s\", \"%s\", 100) = %d\n", str1, str2, ft_strncmp(str1, str2, 100));
	printf("strncmp(\"%s\", \"%s\", 100) = %d\n", str1, str2, strncmp(str1, str2, 100));

	return (0);
}
*/
