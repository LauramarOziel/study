/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:23:07 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:13:12 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*original_str;

	original_str = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (original_str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	test1[] = "hello world";
	char	test2[] = "Hello 42!";
	char	test3[] = "ALREADY CAPS";
	char	test4[] = "";

	printf("Before:  '%s'\n", test1);
	ft_strupcase(test1);
	printf("After: '%s'\n\n", test1);

	printf("Before:  '%s'\n", test2);
	ft_strupcase(test2);
	printf("After: '%s'\n\n", test2);

	printf("Before:  '%s'\n", test3);
	ft_strupcase(test3);
	printf("After: '%s'\n\n", test3);

	printf("Before:  '%s'\n", test4);
	ft_strupcase(test4);
	printf("After: '%s'\n", test4);
	return (0);
}
*/
