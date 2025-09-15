/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:10:41 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 08:17:10 by loziel-d         ###   ########.fr       */
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
	char	*teste1 = "hello";
	char	*teste2 = "Hello";
	char	*teste3 = "hello42";
	char	*teste4 = "";
	char	*teste5 = "WORLD";

	printf("'%s' -> %d\n", teste1, ft_str_is_uppercase(teste1));
	printf("'%s' -> %d\n", teste2, ft_str_is_uppercase(teste2));
	printf("'%s' -> %d\n", teste3, ft_str_is_uppercase(teste3));
	printf("'%s' -> %d\n", teste4, ft_str_is_uppercase(teste4));
	printf("'%s' -> %d\n", teste5, ft_str_is_uppercase(teste5));
	return (0);
}
*/
