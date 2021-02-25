/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugenki <ugenki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:00:37 by ugenki            #+#    #+#             */
/*   Updated: 2021/02/25 22:04:00 by ugenki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	separate(int left, int right)
{
	ft_putchar(left / 10 + 48);
	ft_putchar(left % 10 + 48);
	ft_putchar(' ');
	ft_putchar(right / 10 + 48);
	ft_putchar(right % 10 + 48);
	if (left != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int left;
	int right;

	left = 00;
	right = 01;
	while (left < 99)
	{
		while (right < 99)
		{
			separate(left, right);
			right++;
		}
		separate(left, right);
		right = left + 2;
		left++;
	}
}
