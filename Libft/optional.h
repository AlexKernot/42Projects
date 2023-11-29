/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optional.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:23:45 by akernot           #+#    #+#             */
/*   Updated: 2023/11/18 18:26:46 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONAL_H
# define OPTIONAL_H

typedef struct s_optional
{
	int		value;
	char	exists;
}	t_optional;

#endif