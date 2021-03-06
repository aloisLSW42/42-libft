/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:08:14 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/15 15:11:35 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s)
		return ((void*)(0));
	i = 0;
	while (s[i])
		i++;
	res = (char*)(malloc(sizeof(char) * (i + 1)));
	if (res != (void*)(0))
	{
		res[i] = '\0';
		while ((int)--i >= 0)
		{
			res[i] = f(i, (char)s[i]);
		}
	}
	return (res);
}
