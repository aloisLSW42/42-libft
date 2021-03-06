/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:11:39 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/09 10:27:57 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*fresh_zone;
	size_t			i;

	fresh_zone = (unsigned char*)(malloc(size));
	if (fresh_zone != (void*)(0))
	{
		i = 0;
		while (i < size)
		{
			fresh_zone[i] = 0;
			i++;
		}
	}
	return (fresh_zone);
}
