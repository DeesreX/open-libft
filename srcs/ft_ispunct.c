/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:27:05 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/04 13:27:06 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Checks if the character is a printing, non-alphanumeric one.
*/

int		ft_ispunct(int c)
{
	if ((c >= 33 && 47 >= c) || (c >= 58 && 64 >= c) || (c >= 91 && 96 >= c) \
		|| (c >= 123 && 126 >= c))
		return (1);
	return (0);
}
