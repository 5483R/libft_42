/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:43:14 by schoukou          #+#    #+#             */
/*   Updated: 2021/11/26 17:17:31 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (c == '\0' && s[i] == '\0')
	{
		return ((char *) &s[i]);
	}
	return (0);
}
/*int main()
{
	char p[] = "tripouille";
	printf("%s\n", ft_strchr(p, 'z'));
	printf("%s", strchr(p, 't' + 256));


}*/
