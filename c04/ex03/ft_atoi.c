/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:48:09 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/22 22:54:28 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("1234"));
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("+123abc"));
	printf("%d\n", ft_atoi("   \t\n456"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("abc123"));
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	return (0);
}
*/
