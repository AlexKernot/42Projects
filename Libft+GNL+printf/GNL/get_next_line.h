/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:35:33 by akernot           #+#    #+#             */
/*   Updated: 2023/04/24 16:35:33 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
int		ft_linelen(const char *s);
void	*ft_calloc(int nmemb, int size);
void	*ft_memcpy(void *dest, const void *src, int n);
char	*ft_strjoin(char const *s1, char const *s2);
int		check_newline(char *string);
#endif
