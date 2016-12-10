/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:38:54 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/16 20:38:56 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Makes every letter in the string uppercase.
*/

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		if (ft_islower(str[i - 1]))
			str[i - 1] -= 32;
	return (str);
}
