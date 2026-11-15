/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:57:47 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 14:58:28 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	len;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	len = ft_strlen((char *)nptr);
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+' )
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (len--)
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			res = res * 10 + nptr[i++] - 48;
		else
			return (res * sign);
	}
	return (res * sign);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", atoi(argv[1]));
// 		// printf("%s\n", argv[1]);
// 		printf("%d\n", ft_atoi(argv[1]));
// 	}
// 	return (0);
// }