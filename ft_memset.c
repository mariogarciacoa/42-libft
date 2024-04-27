/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario-ga <mario-ga@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:04:57 by mario-ga          #+#    #+#             */
/*   Updated: 2024/03/18 15:06:37 by mario-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = dest;
	while (i < count)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
