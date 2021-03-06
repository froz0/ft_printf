/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstr_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:23:21 by tmatis            #+#    #+#             */
/*   Updated: 2021/01/04 16:30:15 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wstring.h"
#include "../char/char.h"

int	ft_wstr_strlen(int *wstr)
{
	char	buff[4];
	int		strlen;
	int		buffed;

	strlen = 0;
	while (*wstr)
	{
		buffed = ft_utf8_encode(*wstr++, buff);
		strlen += buffed;
	}
	return (strlen);
}
