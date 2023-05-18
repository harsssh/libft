/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemizuki <kemizuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:51:32 by kemizuki          #+#    #+#             */
/*   Updated: 2023/05/18 20:51:31 by kemizuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t	n;
	char	*buf;

	n = ft_strlen(src);
	buf = (char *)malloc(n + 1);
	if (buf == NULL)
		return (NULL);
	ft_strlcpy(buf, src, n + 1);
	return (buf);
}
