/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebaloyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:25:57 by kebaloyi          #+#    #+#             */
/*   Updated: 2020/07/16 12:42:45 by kebaloyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen(char *str)
{
int	i;
i = 0;

while(str[i] != '\0')
{
	i++;
	return i;
}

}
