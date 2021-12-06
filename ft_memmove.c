/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:05:00 by schoukou          #+#    #+#             */
/*   Updated: 2021/11/20 16:28:10 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*lastd;
	const char	*s;
	const char	*lasts;

	d = dst;
	s = src;
	if ((d == '\0' && s == '\0'))
	{
		return (NULL);
	}
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{	
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
/*int main()
{
	const char *i;
	(int *) *i = "123254";
	char x[] = "abcdfe";
	printf("%s\n", ft_memmove(x,i, 6));
}*/