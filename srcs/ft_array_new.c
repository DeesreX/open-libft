/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Creates a new array with a specific set of numbers (by the argument size).
*/

int		*ft_array_new(size_t size)
{
	int		*arr;

	if (!(arr = (int *)malloc(sizeof(int) * size + 1)))
		return (0);
	while (size)
		arr[size--] = 0;
	return (arr);
}
