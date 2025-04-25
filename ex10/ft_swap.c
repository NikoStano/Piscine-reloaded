/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:42:32 by nistanoj          #+#    #+#             */
/*   Updated: 2025/04/23 16:38:12 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

// #include <stdio.h>

// int	main()
// {
// 	int	a = 15;
// 	int	b = 206;
// 	printf("Avant :\na = %d\n", a);
// 	printf("b = %d\n", b);
// 	ft_swap(&a, &b);
// 	printf("Apres :\na = %d\n", a);
// 	printf("b = %d\n", b);
// 	return (0);
// }
