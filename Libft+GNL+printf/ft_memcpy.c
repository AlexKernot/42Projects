/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:01:20 by akernot           #+#    #+#             */
/*   Updated: 2023/03/11 23:24:05 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*int_dest;
	const char		*int_src;
	size_t			i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	int_dest = (char *)dest;
	int_src = (const char *)src;
	while (i < n)
	{
		int_dest[i] = int_src[i];
		i++;
	}
	return (dest);
}
