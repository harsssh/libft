/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemizuki <kemizuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:11:26 by kemizuki          #+#    #+#             */
/*   Updated: 2023/08/13 12:11:27 by kemizuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	if (ptr == NULL)
		return (ft_calloc(1, size));
	new = ft_calloc(1, size);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, ptr, size);
	free(ptr);
	return (new);
}
