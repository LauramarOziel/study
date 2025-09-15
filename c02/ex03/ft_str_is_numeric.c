/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:58:48 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:08:01 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*test1 = "12345";
	char	*test2 = "123a45";
	char	*test3 = "42 Rio";
	char	*test4 = "";
	char	*test5 = "0";

	printf("'%s' -> %d\n", test1, ft_str_is_numeric(test1));
	printf("'%s' -> %d\n", test2, ft_str_is_numeric(test2));
	printf("'%s' -> %d\n", test3, ft_str_is_numeric(test3));
	printf("'%s' -> %d\n", test4, ft_str_is_numeric(test4));
	printf("'%s' -> %d\n", test5, ft_str_is_numeric(tese5));
	return (0);
}
*/
