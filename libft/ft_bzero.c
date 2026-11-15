/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:13:01 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 12:13:01 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*t;

	t = (unsigned char *) s;
	i = 0;
	while (n--)
		t[i++] = '\0';
}
