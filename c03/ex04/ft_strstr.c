/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:45:52 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/22 08:06:53 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s1 = str;
		s2 = to_find;
		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	haystack[] = "Hello World, this is a test";
	char	needle1[] = "World";
	char	needle2[] = "test";
	char	needle3[] = "";
	char	needle4[] = "Hello";
	char	needle5[] = "string";
	char	needle6[] = "is";

	printf("Test 1 - Find \"World\":\n");
	printf("String: \"%s\"\n", haystack);
	printf("Search: \"%s\"\n", needle1);
	char *result1 = ft_strstr(haystack, needle1);
	if (result1)
		printf("Found at: \"%s\"\n", result1);
	else
		printf("Not found\n");
	printf("Standard strstr: \"%s\"\n\n",
	strstr(haystack, needle1));

	printf("Test 2 - Find \"test\":\n");
	printf("String: \"%s\"\n", haystack);
	printf("Search: \"%s\"\n", needle2);
	char *result2 = ft_strstr(haystack, needle2);
	if (result2)
		printf("Found at: \"%s\"\n", result2);
	else
		printf("Not found\n");
	printf("Standard strstr: \"%s\"\n\n",
	strstr(haystack, needle2));

	printf("Test 3 - Empty search string:\n");
	printf("String: \"%s\"\n", haystack);
	printf("Search: \"%s\" (empty)\n", needle3);
	char *result3 = ft_strstr(haystack, needle3);
	if (result3)
		printf("Found at: \"%s\"\n", result3);
	else
		printf("Not found\n");
	printf("Standard strstr: \"%s\"\n\n",
	strstr(haystack, needle3));

	printf("Test 4 - Find \"Hello\":\n");
	printf("String: \"%s\"\n", haystack);
	printf("Search: \"%s\"\n", needle4);
	char *result4 = ft_strstr(haystack, needle4);
	if (result4)
		printf("Found at: \"%s\"\n", result4);
	else
		printf("Not found\n");
	printf("Standard strstr: \"%s\"\n\n",
	strstr(haystack, needle4));

	printf("Test 5 - Find \"string\":\n");
	printf("String: \"%s\"\n", haystack);
	printf("Search: \"%s\"\n", needle5);
	char *result5 = ft_strstr(haystack, needle5);
	if (result5)
		printf("Found at: \"%s\"\n", result5);
	else
		printf("Not found\n");
	printf("Standard strstr: \"%s\"\n\n",
	strstr(haystack, needle5));

	printf("Test 6 - Multiple occurrences \"is\":\n");
	printf("String: \"%s\"\n", haystack);
	printf("Search: \"%s\"\n", needle6);
	char *result6 = ft_strstr(haystack, needle6);
	if (result6)
		printf("Found at: \"%s\"\n", result6);
	else
		printf("Not found\n");
	printf("Standard strstr: \"%s\"\n",
	strstr(haystack, needle6));
	return (0);
}
*/
