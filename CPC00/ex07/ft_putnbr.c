/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugenki <ugenki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 02:13:48 by ugenki            #+#    #+#             */
/*   Updated: 2021/02/25 02:13:48 by ugenki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);

    }else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * (-1));

    }
    else{

    if (nb >= 10)
        {
          ft_putnbr(nb / 10);
        }
         ft_putchar(nb % 10 + '0');
         
    }
}
int main (void)
{
    ft_putnbr(150);
}
