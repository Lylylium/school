/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:38:35 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/14 16:40:43 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_strlen("salut"));
// 	return (0);
// }