/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugenki <ugenki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:18:13 by ugenki            #+#    #+#             */
/*   Updated: 2021/02/25 21:24:39 by ugenki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char p;
	char o;

	p = 'P';
	o = 'N';
	if (n > 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &o, 1);
	}
}
