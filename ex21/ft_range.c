/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:02:32 by nistanoj          #+#    #+#             */
/*   Updated: 2025/04/23 10:58:20 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = (min + i);
		i++;
	}
	return (tab);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*tab;
// 	int	i;
// 	int	min;
// 	int	max;

// 	min = 5;
// 	max = 12;
// 	tab = ft_range(min, max);
// 	if (tab)
// 	{
// 		i = 0;
// 		while (i < max - min)
// 		{
// 			printf("%d\n", tab[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }