/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:59:44 by schoukou          #+#    #+#             */
/*   Updated: 2021/11/20 17:00:55 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int ascii)
{
	if (ascii < 0 || ascii > 0177)
	{
		return (0);
	}
	else
		return (1);
}
