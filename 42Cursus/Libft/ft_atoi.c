/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarikay <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:21:05 by hsarikay          #+#    #+#             */
/*   Updated: 2023/09/10 14:12:32 by hsarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	number_started;

	result = 0;
	sign = 1;
	number_started = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		number_started = 1;
		str++;
	}
	if (!number_started)
		return (0);
	return (result * sign);
}
//int	negative_checker(char *str);

//int	ft_atoi(char *str)
//{
//	int	i;
//	int	a;

//	i = 0;
//	a = 0;
//	negative_checker(*str);
//	while (str[i] != '\0')
//	{
//		if ((str[i] < 48 || str[i] > 58) && (str[i] != 43 || str[i] != 45))
//		{
//			break ;
//		}
//		else
//		{
//			write(1, &str[i], 1);
//		}
//	}
//}

//int	negative_checker(char *str)
//{
//	int	c;
//	int	counter;

//	counter = 0;
//	c = 0;
//	while (str[c] != '\0')
//	{
//		if (str[c] == 45)
//		{
//			counter = counter +1;
//		}
//		c++;
//	}
//	return (counter);
//}
