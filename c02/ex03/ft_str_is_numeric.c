/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:58:48 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 08:04:10 by loziel-d         ###   ########.fr       */
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
	char	*teste1 = "12345";
	char	*teste2 = "123a45";
	char	*teste3 = "42 Rio";
	char	*teste4 = "";
	char	*teste5 = "0";

	printf("'%s' -> %d\n", teste1, ft_str_is_numeric(teste1));
	printf("'%s' -> %d\n", teste2, ft_str_is_numeric(teste2));
	printf("'%s' -> %d\n", teste3, ft_str_is_numeric(teste3));
	printf("'%s' -> %d\n", teste4, ft_str_is_numeric(teste4));
	printf("'%s' -> %d\n", teste5, ft_str_is_numeric(teste5));
	return (0);
}
*/
