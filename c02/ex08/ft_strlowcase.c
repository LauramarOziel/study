/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:28:54 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:15:10 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*original_str;

	original_str = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (original_str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	test1[] = "HELLO WORLD";
	char	test2[] = "Hello 42!";
	char	test3[] = "already low";
	char	test4[] = "";

	printf("Before:  '%s'\n", test1);
	ft_strlowcase(test1);
	printf("After: '%s'\n\n", test1);

	printf("Before:  '%s'\n", test2);
	ft_strlowcase(test2);
	printf("After: '%s'\n\n", test2);

	printf("Before:  '%s'\n", test3);
	ft_strlowcase(test3);
	printf("After: '%s'\n\n", test3);

	printf("Before:  '%s'\n", test4);
	ft_strlowcase(test4);
	printf("After: '%s'\n", test4);
	return (0);
}
*/
