/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:37:55 by manguyen          #+#    #+#             */
/*   Updated: 2026/11/20 17:09:19 by manguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count += 1;
	}	
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		m;
	int		count;
	char	*num;

	i = ft_count(n);
	count = ft_count(n) + 1;
	num = malloc((count) * sizeof(char));
	if (!num)
		return (NULL);
	if (n < 0)
	{
		num[0] = '-';
		num[i + 1] = '\0';
		n = -n;
		i += 1;
	}
	else
		num[i] = '\0';
	while (n > 0)
	{
		m = n % 10;
		num[i - 2] = '0' + m;
		n = n / 10;
		i--;
	}
	return	(num);
}
int	main(void)
{
	// int		i = 0;
	int 	n = -123;
	// int		count = ft_count(n);
	char	*result = ft_itoa(n);

	// printf("count = %d\n", count);
	// while (count--)
	// 	printf("%c", result[i++]);
	printf("itoa = %s\n", result);
	return (0);
}