/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:51:41 by cmayne-p          #+#    #+#             */
/*   Updated: 2025/04/05 17:06:20 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	@brief Computes the absolute value of an integer.
 *
 *	This function returns the absolute (positive) value of the given integer.
 *	Note: Passing INT_MIN may cause undefined behavior due to overflow.
 *
 *	@param n The integer whose absolute value is to be calculated.
 *	@return The absolute value of @p n.
 */
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

