/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 08:13:52 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/07 10:29:28 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
	{
		*(s1 + i) = *(s2 + j);
		i++;
		j++;
	}
	*(s1 + i) = '\0';
	return (s1);
}