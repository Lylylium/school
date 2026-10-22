/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:00:17 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 15:00:17 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	char	*cal;

	i = 0;
	if (nmemb == '0' || size == '0')
		return (NULL);
	if ((nmemb * size) > INT_MAX)
		return ("error");
	cal = malloc(nmemb * size);
	while (nmemb--)
		cal[i++] = 0;
	return (cal);
}
