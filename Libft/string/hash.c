/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 21:04:22 by akernot           #+#    #+#             */
/*   Updated: 2023/06/22 23:00:08 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"
#include "libft.h"

/* converts each instruction into  */
int	hash(char const *string)
{
	const int	hash_const = 0x55555555;
	int			result;
	int			i;

	i = 0;
	result = hash_const;
	while (string[i])
	{
		result ^= string[i];
		result += ((result << 7) | (result >> 25));
		++i;
	}
	result %= 17;
	result = -result;
	return (result);
}

/*int main(void)
{
	ft_printf("sa: %i\n", hash("sa"));
	ft_printf("sb: %i\n", hash("sb"));
	ft_printf("ss: %i\n", hash("ss"));
	ft_printf("pa: %i\n", hash("pa"));
	ft_printf("pb: %i\n", hash("pb"));
	ft_printf("ra: %i\n", hash("ra"));
	ft_printf("rb: %i\n", hash("rb"));
	ft_printf("rr: %i\n", hash("rr"));
	ft_printf("rra: %i\n", hash("rra"));
	ft_printf("rrb: %i\n", hash("rrb"));
	ft_printf("rrr: %i\n", hash("rrr"));
	return (0);
}*/
