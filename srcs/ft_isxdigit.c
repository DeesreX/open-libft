/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:27:05 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/04 13:27:06 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the character is a hexadecimal digit.
*/

int		ft_isxdigit(int c)
{
	if ((c >= '0' && '9' >= c) || (c >= 'a' && 'f' >= c) || \
		(c >= 'A' && 'F' >= c))
		return (1);
	return (0);
}