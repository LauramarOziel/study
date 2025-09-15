/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:10:41 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:10:01 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*test1 = "hello";
	char	*test2 = "Hello";
	char	*test3 = "hello42";
	char	*test4 = "";
	char	*test5 = "WORLD";

	printf("'%s' -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("'%s' -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("'%s' -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("'%s' -> %d\n", test4, ft_str_is_uppercase(test4));
	printf("'%s' -> %d\n", test5, ft_str_is_uppercase(test5));
	return (0);
}
*/
