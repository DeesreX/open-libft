/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:49:36 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/02 15:49:37 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Appends a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating '/0'. The string s1
** must have sufficient space to hold the result.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i += 1;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j += 1;
	}
	s1[i + j] = '\0';
	return (s1);
}
