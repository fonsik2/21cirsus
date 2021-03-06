/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smdyan <smdyan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:25:51 by smdyan            #+#    #+#             */
/*   Updated: 2022/02/27 12:03:58 by smdyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (*(src + len))
		len++;
	if (size == 0)
		return (len);
	size--;
	while ((size > 0) && (i < len))
	{
		*(dst + i) = *(src + i);
		size--;
		i++;
	}
	*(dst + i) = '\0';
	return (len);
}
