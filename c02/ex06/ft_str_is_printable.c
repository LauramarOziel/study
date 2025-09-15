/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:18:11 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:10:53 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*test1 = "Hello 42!";
	char	*test2 = "Hello\t42";
	char	*test3 = "Hello\n";
	char	*test4 = "";
	char	*test5 = "~#$%^&*()";

	printf("'%s' -> %d\n", test1, ft_str_is_printable(test1));
	printf("'Hello\\t42' -> %d\n", ft_str_is_printable(test2));
	printf("'Hello\\n' -> %d\n", ft_str_is_printable(test3));
	printf("'%s' -> %d\n", test4, ft_str_is_printable(test4));
	printf("'%s' -> %d\n", test5, ft_str_is_printable(test5));
	return (0);
}
*/
