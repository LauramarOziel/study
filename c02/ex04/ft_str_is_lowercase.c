/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:04:53 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:09:06 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	char	*test5 = "world";

	printf("'%s' -> %d\n", test1, ft_str_is_lowercase(test1));
	printf("'%s' -> %d\n", test2, ft_str_is_lowercase(test2));
	printf("'%s' -> %d\n", test3, ft_str_is_lowercase(test3));
	printf("'%s' -> %d\n", teste4, ft_str_is_lowercase(teste4));
	printf("'%s' -> %d\n", teste5, ft_str_is_lowercase(teste5));
	return (0);
}
*/
