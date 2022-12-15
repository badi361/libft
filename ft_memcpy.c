/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:55:11 by bguzel            #+#    #+#             */
/*   Updated: 2022/10/31 19:02:15 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*sourc;
	char	*dest;

	sourc = (char *)src;
	dest = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}	
	return (dest);
}
