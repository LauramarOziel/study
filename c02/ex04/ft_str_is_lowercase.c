/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:04:53 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 08:10:04 by loziel-d         ###   ########.fr       */
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
	char	*teste1 = "hello";
	char	*teste2 = "Hello";
	char	*teste3 = "hello42";
	char	*teste4 = "";
	char	*teste5 = "world";

	printf("'%s' -> %d\n", teste1, ft_str_is_lowercase(teste1));
	printf("'%s' -> %d\n", teste2, ft_str_is_lowercase(teste2));
	printf("'%s' -> %d\n", teste3, ft_str_is_lowercase(teste3));
	printf("'%s' -> %d\n", teste4, ft_str_is_lowercase(teste4));
	printf("'%s' -> %d\n", teste5, ft_str_is_lowercase(teste5));
	return (0);
}
*/
