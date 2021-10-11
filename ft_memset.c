/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 00:42:46 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/07 17:24:24 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *) dest;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (dest = tmp);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	//char	str[] = {"asd"};

// 	printf ("my: %s\n",ft_memset(((void *) 0), 'a', 12));
// //	printf ("original: %s\n",memset(str, '*', 1));
// 	return (0);
// }