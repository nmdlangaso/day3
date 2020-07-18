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
