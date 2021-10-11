/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:42:06 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/07 16:49:34 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char str[] = "";
// char chr = '\0';
// printf("orig: %s\n",strchr(str, chr));
// printf("my: %s\n",ft_strchr(str, chr));
// return 0;
// }