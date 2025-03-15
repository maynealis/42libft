/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:33:12 by cmayne-p          #+#    #+#             */
/*   Updated: 2025/03/15 15:36:55 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees a dynamically allocated 2D array of strings.
 *
 * This function iterates through a NULL-terminated array of strings,
 * freeing each string individually before freeing the array itself.
 *
 * @param arr The 2D array of strings to be freed.
 *             The array must be NULL-terminated to avoid undefined behavior.
 *
 * @note This function assumes that `arr` was dynamically allocated,
 *       and each element within `arr` was also dynamically allocated;
 * 		 for example using the `ft_split` function.
 */
void	ft_free_arr2d(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}