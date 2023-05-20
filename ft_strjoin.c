/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemizuki <kemizuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:33:56 by kemizuki          #+#    #+#             */
/*   Updated: 2023/05/20 12:17:22 by kemizuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	size_t	buf_len;

	buf_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	buf = ft_calloc(buf_len, sizeof(char));
	if (buf == NULL)
		return (NULL);
	ft_strlcat(buf, s1, buf_len);
	ft_strlcat(buf, s2, buf_len);
	return (buf);
}
