/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario-ga <mario-ga@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:42:59 by mario-ga          #+#    #+#             */
/*   Updated: 2024/04/24 10:05:04 by mario-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*addr;

	if (nitems == 0 || size == 0)
		return (malloc(1));
	addr = malloc(nitems * size);
	if (!addr)
		return (NULL);
	ft_bzero(addr, nitems * size);
	return (addr);
}
