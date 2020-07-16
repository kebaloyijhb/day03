/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebaloyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:44:30 by kebaloyi          #+#    #+#             */
/*   Updated: 2020/07/16 16:05:29 by kebaloyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(int nbr)
{
	write(1,&nbr,1);
}

void ft_putnbr(int *nbr)
{
	
	if((nbr / 10) > 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 +'0');
}

int main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	return 0;
}
