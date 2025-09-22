/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 08:57:00 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/22 10:25:29 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Length of 'Hello': %d\n", ft_strlen("Hello"));
	printf("Length of '42': %d\n", ft_strlen("42"));
	printf("Length of '': %d\n", ft_strlen(""));
	printf("Length of 'A': %d\n", ft_strlen("A"));
	return (0);
}
*/
