/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmdlanags <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:10:09 by nmdlanags         #+#    #+#             */
/*   Updated: 2020/07/15 08:36:25 by nmdlanags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c)
{

write (1, &c , 1);
}
void	ft_putchar(int nb)
{

	if (nb <0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main(void)
{

	int nmb;
	int *pr1;
	int **pr2;
	int ***pr3;
	int ****pr4;
	int *****pr5;
	int ******pr6;
	int *******pr7;
	int ********pr8;
	int *********pr9;


	
	nmb = 42;
	pr1 = &nmb;
	pr2 = &pr1;
	pr3 = &pr2;
	pr4 = &pr3;
	pr5 = &pr4;
	pr6 = &pr5;
	pr7 = &pr6;
	pr8 = &pr7;
	pr9 = &pr8;

   	ft_ultimate_ft(pr9 );
	ft_putchar(*********pr9);
	return (0);
}	
