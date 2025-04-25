/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:30:59 by nistanoj          #+#    #+#             */
/*   Updated: 2025/04/25 15:29:40 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(int ac, char **av)
// {
// 	int	div=0;
// 	int	mod=0;

// 	if (ac == 3)
// 	{
// 		ft_div_mod(atoi(av[1]), atoi(av[2]), &div, &mod);
// 		printf("Div : %d\n", div);
// 		printf("Mod : %d\n", mod);
// 	}
// 	else
// 		printf("ERROR ARGS !");
// 	return (0);
// }
