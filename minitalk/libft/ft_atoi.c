/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:57:00 by mbratic           #+#    #+#             */
/*   Updated: 2022/10/19 10:52:10 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int		r;
	int				s;

	s = 1;
	r = 0;
	while (*str == ' ' || *str == '\f' || *str == '\r'
		|| *str == '\t' || *str == '\v' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -s;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		r = (r * 10) + (*str - '0');
		str++;
		if (r * s > 2147843647)
			return (-1);
		if (r * s < -2147483648)
			return (0);
	}
	return (r * s);
}
