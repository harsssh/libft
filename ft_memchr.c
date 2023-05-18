/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemizuki <kemizuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:20:00 by kemizuki          #+#    #+#             */
/*   Updated: 2023/05/18 15:43:34 by kemizuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		chr;

	str = s;
	chr = c;
	while (n && *str != chr)
	{
		str++;
		n--;
	}
	if (*str == chr)
		return ((void *)str);
	return (NULL);
}
