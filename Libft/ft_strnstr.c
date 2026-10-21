/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:44:36 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 17:55:43 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int j;

	i = 0;
	while (i < len)
	{
		if (little[j] == big[i])
		{
			while (little[j++] == big[i])
				i++;
			if (little[j] == '\0')
				return ()
		}
		i++;

		



		
	
	}
}