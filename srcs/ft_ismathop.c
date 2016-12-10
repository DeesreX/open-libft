/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismathop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:11:30 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/04 13:11:32 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Checks if the character is a math operator.
*/

int		ft_ismathop(int c)
{
	if (c == '+' || c == '-' || c == '*' || c == '*' || c == '%')
		return (1);
	return (0);
}
