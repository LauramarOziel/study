/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:20:41 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/16 23:22:47 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "Hell";
	char	str4[] = "Hellz";
	char	str5[] = "";
	char	str6[] = "Test";

	printf("Test 1 - Equal strings:\n");
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("strcmp(\"%s\", \"%s\") = %d\n\n", str1, str2, strcmp(str1, str2));

	printf("Test 2 - First string greater:\n");
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("strcmp(\"%s\", \"%s\") = %d\n\n", str1, str3, strcmp(str1, str3));

	printf("Test 3 - Second string greater:\n");
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", str3, str1, ft_strcmp(str3, str1));
	printf("strcmp(\"%s\", \"%s\") = %d\n\n", str3, str1, strcmp(str3, str1));

	printf("Test 4 - Difference in last character:\n");
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", str1, str4, ft_strcmp(str1, str4));
	printf("strcmp(\"%s\", \"%s\") = %d\n\n", str1, str4, strcmp(str1, str4));

	printf("Test 5 - Empty string:\n");
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", str5, str6, ft_strcmp(str5, str6));
	printf("strcmp(\"%s\", \"%s\") = %d\n\n", str5, str6, strcmp(str5, str6));

	printf("Test 6 - Both strings empty:\n");
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", str5, str5, ft_strcmp(str5, str5));
	printf("strcmp(\"%s\", \"%s\") = %d\n", str5, str5, strcmp(str5, str5));

	return (0);
}
*/
