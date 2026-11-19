/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 19/11/2026 12:37:55 by manguyen          #+#    #+#             */
/*   Updated: 19/11/2026 13:06:13 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	if (n < 0)
		n *= (-1);
	count = 0;
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

	i = 0;
	count = ft_count(n);
	num = malloc((count + 1) * sizeof(char));
	if (!num)
		return (NULL);
	// if (n < 0)
	// {
	// 	num[0] = '-';
	// 	n = n * (-1);
	// 	i = 1;
	// }
	while (count > 0)
	{
		m = n % 10;
		num[count] = '0' + m;
		printf("%c", num[count]);
		n = n / 10;
		i++;
		count--;
	}
	printf("\n");
	num[i + 1] = '\0';
	printf("num = %s\n", num);
	return	(num);
}
int	main(void)
{
	// int		i = 0;
	int 	n = 2468;
	int		count = ft_count(n);
	char	*result = ft_itoa(n);

	printf("count = %d\n", count);
	// while (count--)
	// 	printf("%c", result[i++]);
	printf("itoa = %s\n", result);
	return (0);
}